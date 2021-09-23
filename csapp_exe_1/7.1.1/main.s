	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.section	__TEXT,__literal8,8byte_literals
	.p2align	3                               ## -- Begin function main
LCPI0_0:
	.quad	0x40091eb851eb851f              ## double 3.1400000000000001
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	xorl	%eax, %eax
	movsd	LCPI0_0(%rip), %xmm0            ## xmm0 = mem[0],zero
	movl	$0, -4(%rbp)
	movl	$2, -8(%rbp)
	cvtsi2sdl	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	cvtsi2sdl	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	cvttsd2si	%xmm0, %ecx
	movl	%ecx, -12(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
