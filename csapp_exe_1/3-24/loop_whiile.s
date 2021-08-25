	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_loop_while                     ## -- Begin function loop_while
	.p2align	4, 0x90
_loop_while:                            ## @loop_while
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	$1, %eax
	cmpq	%rsi, %rdi
	jge	LBB0_3
## %bb.1:
	movl	$1, %eax
	.p2align	4, 0x90
LBB0_2:                                 ## =>This Inner Loop Header: Depth=1
	leaq	(%rsi,%rdi), %rcx
	imulq	%rcx, %rax
	incq	%rdi
	cmpq	%rdi, %rsi
	jne	LBB0_2
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
	xorl	%eax, %eax
	popq	%rbp
	retq
                                        ## -- End function
.subsections_via_symbols
