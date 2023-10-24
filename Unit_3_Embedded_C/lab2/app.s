	.cpu arm926ej-s
	.fpu softvfp
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"app.c"
	.global	String_Buffer
	.data
	.align	2
	.type	String_Buffer, %object
	.size	String_Buffer, 100
String_Buffer:
	.ascii	"Learn-in-depth: <Roaa>\000"
	.space	77
	.global	String_Buffer_C
	.section	.rodata
	.align	2
	.type	String_Buffer_C, %object
	.size	String_Buffer_C, 100
String_Buffer_C:
	.ascii	"Learn-in-depth: Roaa\000"
	.space	79
	.text
	.align	2
	.global	main
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	stmfd	sp!, {fp, lr}
	add	fp, sp, #4
	ldr	r0, .L2
	bl	Uart_Send_String
	ldmfd	sp!, {fp, pc}
.L3:
	.align	2
.L2:
	.word	String_Buffer
	.size	main, .-main
	.ident	"GCC: (GNU) 4.7.2"
