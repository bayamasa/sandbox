	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_cond                           ## -- Begin function cond
	.p2align	4, 0x90
_cond:                                  ## @cond
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	testq	%rsi, %rsi
	je	LBB0_3
## %bb.1:
	cmpq	%rdi, (%rsi)
	jge	LBB0_3
## %bb.2:
	movq	%rdi, (%rsi)
LBB0_3:
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	-8(%rbp), %rdi
	leaq	-8(%rbp), %rsi
	callq	_cond
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
                                        ## -- End function
.subsections_via_symbols
