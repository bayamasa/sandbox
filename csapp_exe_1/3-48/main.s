	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_len                            ## -- Begin function len
	.p2align	4, 0x90
_len:                                   ## @len
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	callq	_strlen
                                        ## kill: def $eax killed $eax killed $rax
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_iptoa                          ## -- Begin function iptoa
	.p2align	4, 0x90
_iptoa:                                 ## @iptoa
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	movq	(%rsi), %rdx
	leaq	L_.str(%rip), %rsi
	xorl	%eax, %eax
	callq	_sprintf
	popq	%rbp
	retq
                                        ## -- End function
	.globl	_intlen                         ## -- Begin function intlen
	.p2align	4, 0x90
_intlen:                                ## @intlen
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	pushq	%rbx
	subq	$40, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	%rdi, -40(%rbp)
	leaq	-28(%rbp), %rbx
	leaq	-40(%rbp), %rsi
	movq	%rbx, %rdi
	callq	_iptoa
	movq	%rbx, %rdi
	callq	_len
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	cmpq	-16(%rbp), %rcx
	jne	LBB2_2
## %bb.1:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	retq
LBB2_2:
	callq	___stack_chk_fail
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%ld"

.subsections_via_symbols
