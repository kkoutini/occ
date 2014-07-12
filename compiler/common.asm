#common assemblies

method_not_found:
li $v0 ,1

li $a0 ,-1
syscall

li $v0,10
syscall

type_not_found:
li $v0 ,1

li $a0 ,-2
syscall

li $v0,10
syscall


#block_head = {next,size}
# a0 is the size , returns v0 as the space
malloc:

addi $a0,$a0,15 # 8 +  4 for rc + 3 for alignment

#add allignment
li  $t0,-4 # -4 is not 3
and $a0, $a0,$t0
# end
la $t2,block_head
lw $t0,0($t2)
block_head_still:
beq $t0,$0,block_head_null
lw $t1,4($t0)
blt $t1,$a0,no_space_continue
lw $t1,0($t0)
sw $t1,0($t2)
#this block in enough
addi $v0,$t0,12
li $t1,-1
sw $t1,0($t0)
li $t1,0
sw $t1,8($t0)
jr $ra
#b malloc_return
no_space_continue:
move $t2,$t0
lw $t0,0($t2)
b block_head_still

block_head_null:
#coudn't reuse any of the blocks make one
#sbrk
li $v0,9 
syscall
sw $a0,4($v0)
addi $v0,$v0,12
li $t1,-1
sw $t1,-12($v0)
li $t1,0
sw $t1,-4($t0)

malloc_return:
jr $ra


free:
addi $t1,$a0,-12
lw $t0,0($t1)
bne $t0,-1,freed_already
lw $t0,block_head
sw $t0,0($t1)
sw $t1,block_head
li $v0,1 # 1 means it was freed
jr $ra
freed_already:
li $v0,2 # 2 means it was previously freed
jr $ra


increase_rc:
beq $a0,$0,increase_rc_end
blt $a0,0x10040000,increase_rc_end
lw $t0,-4($a0)
addi $t0,$t0,1
sw $t0,-4($a0)
increase_rc_end:
jr $ra

decrease_rc:
beq $a0,$0,decrease_rc_end
blt $a0,0x10040000,increase_rc_end
lw $t0,-4($a0)
addi $t0,$t0,-1
sw $t0,-4($a0)
decrease_rc_end:
jr $ra



