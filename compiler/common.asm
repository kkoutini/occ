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

addi $a0,$a0,11 # 8 + 3 for alignment

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
addi $v0,$t0,8
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
addi $v0,$v0,8
malloc_return:
jr $ra


free:
lw $t0,block_head
addi $t1,$a0,-8
sw $t0,0($t1)
sw $t1,block_head
jr $ra

