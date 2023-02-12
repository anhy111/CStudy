	.text
	.def	@feat.00;
	.scl	3;
	.type	0;
	.endef
	.globl	@feat.00
.set @feat.00, 0
	.file	"main.c"
	.def	add;
	.scl	2;
	.type	32;
	.endef
	.globl	add                             # -- Begin function add
	.p2align	4, 0x90
add:                                    # @add
.seh_proc add
# %bb.0:
	subq	$16, %rsp
	.seh_stackalloc 16
	.seh_endprologue
	movl	%edx, 12(%rsp)
	movl	%ecx, 8(%rsp)
	movl	8(%rsp), %eax
	addl	12(%rsp), %eax
	movl	%eax, 4(%rsp)
	movl	4(%rsp), %eax
	addq	$16, %rsp
	retq
	.seh_endproc
                                        # -- End function
	.def	main;
	.scl	2;
	.type	32;
	.endef
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
main:                                   # @main
.seh_proc main
# %bb.0:
	subq	$56, %rsp
	.seh_stackalloc 56
	.seh_endprologue
	movl	$0, 52(%rsp)
	movl	$1, 48(%rsp)
	movl	$2, 44(%rsp)
	movl	44(%rsp), %edx
	movl	48(%rsp), %ecx
	callq	add
	nop
	addq	$56, %rsp
	retq
	.seh_endproc
                                        # -- End function
	.addrsig
	.addrsig_sym add
