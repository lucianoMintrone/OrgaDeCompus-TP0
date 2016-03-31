	.file	1 "file_handler.c"
	.section .mdebug.abi32
	.previous
	.abicalls
	.text
	.align	2
	.globl	get_encode_chars
	.ent	get_encode_chars
get_encode_chars:
	.frame	$fp,40,$31		# vars= 0, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,40
	.cprestore 16
	sw	$31,32($sp)
	sw	$fp,28($sp)
	sw	$28,24($sp)
	move	$fp,$sp
	sw	$4,40($fp)
	sw	$5,44($fp)
	lw	$4,44($fp)
	li	$5,4			# 0x4
	lw	$6,40($fp)
	la	$25,fgets
	jal	$31,$25
	lw	$4,44($fp)
	la	$25,strlen
	jal	$31,$25
	move	$sp,$fp
	lw	$31,32($sp)
	lw	$fp,28($sp)
	addu	$sp,$sp,40
	j	$31
	.end	get_encode_chars
	.size	get_encode_chars, .-get_encode_chars
	.align	2
	.globl	get_decode_chars
	.ent	get_decode_chars
get_decode_chars:
	.frame	$fp,40,$31		# vars= 0, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,40
	.cprestore 16
	sw	$31,32($sp)
	sw	$fp,28($sp)
	sw	$28,24($sp)
	move	$fp,$sp
	sw	$4,40($fp)
	sw	$5,44($fp)
	lw	$4,44($fp)
	li	$5,5			# 0x5
	lw	$6,40($fp)
	la	$25,fgets
	jal	$31,$25
	lw	$4,44($fp)
	la	$25,strlen
	jal	$31,$25
	move	$sp,$fp
	lw	$31,32($sp)
	lw	$fp,28($sp)
	addu	$sp,$sp,40
	j	$31
	.end	get_decode_chars
	.size	get_decode_chars, .-get_decode_chars
	.align	2
	.globl	write_code
	.ent	write_code
write_code:
	.frame	$fp,40,$31		# vars= 0, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,40
	.cprestore 16
	sw	$31,32($sp)
	sw	$fp,28($sp)
	sw	$28,24($sp)
	move	$fp,$sp
	sw	$4,40($fp)
	sw	$5,44($fp)
	lw	$4,44($fp)
	lw	$5,40($fp)
	la	$25,fputs
	jal	$31,$25
	move	$sp,$fp
	lw	$31,32($sp)
	lw	$fp,28($sp)
	addu	$sp,$sp,40
	j	$31
	.end	write_code
	.size	write_code, .-write_code
	.align	2
	.globl	write_decode
	.ent	write_decode
write_decode:
	.frame	$fp,48,$31		# vars= 8, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,48
	.cprestore 16
	sw	$31,40($sp)
	sw	$fp,36($sp)
	sw	$28,32($sp)
	move	$fp,$sp
	sw	$4,48($fp)
	sw	$5,52($fp)
	sw	$6,56($fp)
	sw	$0,24($fp)
$L9:
	lw	$2,24($fp)
	lw	$3,52($fp)
	sltu	$2,$2,$3
	bne	$2,$0,$L12
	b	$L8
$L12:
	lw	$3,56($fp)
	lw	$2,24($fp)
	addu	$2,$3,$2
	lb	$2,0($2)
	move	$4,$2
	lw	$5,48($fp)
	la	$25,fputc
	jal	$31,$25
	lw	$2,24($fp)
	addu	$2,$2,1
	sw	$2,24($fp)
	b	$L9
$L8:
	move	$sp,$fp
	lw	$31,40($sp)
	lw	$fp,36($sp)
	addu	$sp,$sp,48
	j	$31
	.end	write_decode
	.size	write_decode, .-write_decode
	.align	2
	.globl	fsize
	.ent	fsize
fsize:
	.frame	$fp,48,$31		# vars= 8, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,48
	.cprestore 16
	sw	$31,40($sp)
	sw	$fp,36($sp)
	sw	$28,32($sp)
	move	$fp,$sp
	sw	$4,48($fp)
	lw	$4,48($fp)
	la	$25,ftell
	jal	$31,$25
	sw	$2,28($fp)
	lw	$4,48($fp)
	move	$5,$0
	li	$6,2			# 0x2
	la	$25,fseek
	jal	$31,$25
	lw	$4,48($fp)
	la	$25,ftell
	jal	$31,$25
	sw	$2,24($fp)
	lw	$4,48($fp)
	lw	$5,28($fp)
	move	$6,$0
	la	$25,fseek
	jal	$31,$25
	lw	$2,24($fp)
	move	$sp,$fp
	lw	$31,40($sp)
	lw	$fp,36($sp)
	addu	$sp,$sp,48
	j	$31
	.end	fsize
	.size	fsize, .-fsize
	.ident	"GCC: (GNU) 3.3.3 (NetBSD nb3 20040520)"
