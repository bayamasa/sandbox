	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_swap_add                       ## -- Begin function swap_add
	.p2align	4, 0x90
_swap_add:                              ## @swap_add
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	movq	(%rdi), %rcx
	movq	(%rsi), %rax
	movq	%rax, (%rdi)
	movq	%rcx, (%rsi)
	addq	%rcx, %rax
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_caller                         ## -- Begin function caller
	.p2align	4, 0x90
_caller:                                ## @caller
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movq	$534, -16(%rbp)                 ## imm = 0x216
	movq	$1057, -8(%rbp)                 ## imm = 0x421
	leaq	-16(%rbp), %rdi
	leaq	-8(%rbp), %rsi
	callq	_swap_add
	movq	-16(%rbp), %rcx
	subq	-8(%rbp), %rcx
	imulq	%rcx, %rax
	addq	$16, %rsp
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	callq	_caller
	xorl	%eax, %eax
	popq	%rbp
	retq
                                        ## -- End function
.subsections_via_symbols
