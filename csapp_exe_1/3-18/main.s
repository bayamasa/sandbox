	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_test                           ## -- Begin function test
	.p2align	4, 0x90
_test:                                  ## @test
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	cmpq	$-4, %rdi
	jg	LBB0_2
## %bb.1:
	cmpq	%rdx, %rsi
	cmovgeq	%rdx, %rdi
	imulq	%rsi, %rdi
	movq	%rdi, %rax
	popq	%rbp
	retq
LBB0_2:
	addq	%rdi, %rsi
	addq	%rdx, %rsi
	imulq	%rdi, %rdx
	cmpq	$2, %rdi
	cmovleq	%rsi, %rdx
	movq	%rdx, %rax
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	xorl	%eax, %eax
	popq	%rbp
	retq
                                        ## -- End function
.subsections_via_symbols
