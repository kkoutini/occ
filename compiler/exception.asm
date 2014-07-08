    
   move $k0,$v0   # Save $v0 value
   move $k1,$a0   # Save $a0 value
   sw $a0,-4($0)
   sw $v0,-8($0)
   la   $a0, msg  # address of string to print
   li   $v0, 4    # Print String service
   syscall
   lw   $a0, 4($k0)  # address of string to print
   li   $v0, 4    # Print String service
   syscall
   
#   move $v0,$k0   # Restore $v0
#   move $a0,$k1   # Restore $a0
#   lw $a0,-4($0)
#   lw $v0,-8($0)

#  mfc0 $k0,$14   # Coprocessor 0 register $14 has address of trapping instruction
#   addi $k0,$k0,4 # Add 4 to point to next instruction
#   mtc0 $k0,$14   # Store new address back into $14
 #  eret           # Error return; set PC to value in $14
