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