### Please follow this order.

```
$ make
$ ./catc -S ./test/hello.c
		.section	.rodata
.LC0:       .string	"Hello World"
		.text
		.align	4
		.global	main
		.type	main,@function
main:       
                pushl	%ebp
		movl	%esp,%ebp
		subl	$24,%esp
		movl	%ebx,-4(%ebp)
		lea	.LC0,%eax
		pushl	%eax
		call	printf
		movl	$0,%eax
		jmp	.L1
.L1:	        movl	-4(%ebp),%ebx
		leave
		ret
$ ./catc -S ./test/hello.c > ./test/hello.asm
```
> After this, if your computer is 64bit, you need to prepend '.code32' at the first line of hello.asm file. It will change the target to 32bit platform.

```
$ as ./test/hello.asm -o ./test/hello.o
$ gcc -no-pie ./test/hello.o -o ./test.hello
$ ./test/hello
Hello World
```
