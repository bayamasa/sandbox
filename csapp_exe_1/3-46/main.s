	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$100000000, %edi                ## imm = 0x5F5E100
	callq	_malloc
	xorl	%ecx, %ecx
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movb	$49, (%rax)
	movl	%ecx, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
                                        ## -- End function
.subsections_via_symbols
