	.file	1 "ascii_64_converter.c"
	.section .mdebug.abi32
	.previous
	.abicalls
	.text
	.align	2
	.ent	numberToBeConvert
numberToBeConvert:
	.frame	$fp,32,$31		# vars= 16, regs= 2/0, args= 0, extra= 8
	.mask	0x50000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,32
	.cprestore 0
	sw	$fp,28($sp)
	sw	$28,24($sp)
	move	$fp,$sp
	move	$2,$4
	sw	$5,36($fp)
	sw	$6,40($fp)
	sb	$2,8($fp)
	lb	$3,8($fp)
	lw	$2,36($fp)
	sra	$2,$3,$2
	sw	$2,12($fp)
	li	$3,8			# 0x8
	lw	$2,36($fp)
	subu	$2,$3,$2
	sw	$2,16($fp)
	lw	$3,40($fp)
	lw	$2,16($fp)
	sll	$2,$3,$2
	sw	$2,40($fp)
	lw	$3,12($fp)
	lw	$2,40($fp)
	addu	$2,$3,$2
	move	$sp,$fp
	lw	$fp,28($sp)
	addu	$sp,$sp,32
	j	$31
	.end	numberToBeConvert
	.size	numberToBeConvert, .-numberToBeConvert
	.align	2
	.ent	numberToBeConvertForLastByte
numberToBeConvertForLastByte:
	.frame	$fp,16,$31		# vars= 0, regs= 2/0, args= 0, extra= 8
	.mask	0x50000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,16
	.cprestore 0
	sw	$fp,12($sp)
	sw	$28,8($sp)
	move	$fp,$sp
	sw	$4,16($fp)
	sw	$5,20($fp)
	lw	$3,16($fp)
	lw	$2,20($fp)
	sll	$2,$3,$2
	sw	$2,16($fp)
	move	$sp,$fp
	lw	$fp,12($sp)
	addu	$sp,$sp,16
	j	$31
	.end	numberToBeConvertForLastByte
	.size	numberToBeConvertForLastByte, .-numberToBeConvertForLastByte
	.align	2
	.globl	_encode_ascii_to_64
	.ent	_encode_ascii_to_64
_encode_ascii_to_64:
	.frame	$fp,64,$31		# vars= 24, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,64
	.cprestore 16
	sw	$31,56($sp)
	sw	$fp,52($sp)
	sw	$28,48($sp)
	move	$fp,$sp
	sw	$4,64($fp)
	sw	$5,68($fp)
	sw	$6,72($fp)
	sw	$0,28($fp)
	lw	$2,68($fp)
	sw	$2,40($fp)
	li	$2,1			# 0x1
	lw	$3,40($fp)
	beq	$3,$2,$L22
	lw	$3,40($fp)
	sltu	$2,$3,1
	bne	$2,$0,$L19
	li	$2,2			# 0x2
	lw	$3,40($fp)
	beq	$3,$2,$L23
	li	$2,3			# 0x3
	lw	$3,40($fp)
	beq	$3,$2,$L24
	b	$L19
$L22:
	lw	$2,64($fp)
	lbu	$2,0($2)
	sb	$2,36($fp)
	lbu	$2,36($fp)
	andi	$2,$2,0x3
	sw	$2,24($fp)
	lb	$2,36($fp)
	move	$4,$2
	li	$5,2			# 0x2
	lw	$6,28($fp)
	la	$25,numberToBeConvert
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	sb	$3,0($2)
	lw	$2,24($fp)
	sw	$2,28($fp)
	lw	$4,28($fp)
	li	$5,4			# 0x4
	la	$25,numberToBeConvertForLastByte
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	addu	$2,$2,1
	sb	$3,0($2)
	lw	$2,72($fp)
	addu	$3,$2,2
	li	$2,61			# 0x3d
	sb	$2,0($3)
	lw	$2,72($fp)
	addu	$3,$2,3
	li	$2,61			# 0x3d
	sb	$2,0($3)
	b	$L19
$L23:
	lw	$2,64($fp)
	lbu	$2,0($2)
	sb	$2,36($fp)
	lbu	$2,36($fp)
	andi	$2,$2,0x3
	sw	$2,24($fp)
	lb	$2,36($fp)
	move	$4,$2
	li	$5,2			# 0x2
	lw	$6,28($fp)
	la	$25,numberToBeConvert
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	sb	$3,0($2)
	lw	$2,24($fp)
	sw	$2,28($fp)
	lw	$2,64($fp)
	addu	$2,$2,1
	lbu	$2,0($2)
	sb	$2,36($fp)
	lbu	$2,36($fp)
	andi	$2,$2,0xf
	sw	$2,24($fp)
	lb	$2,36($fp)
	move	$4,$2
	li	$5,4			# 0x4
	lw	$6,28($fp)
	la	$25,numberToBeConvert
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	addu	$2,$2,1
	sb	$3,0($2)
	lw	$2,24($fp)
	sw	$2,28($fp)
	lw	$4,28($fp)
	li	$5,2			# 0x2
	la	$25,numberToBeConvertForLastByte
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	addu	$2,$2,2
	sb	$3,0($2)
	lw	$2,72($fp)
	addu	$3,$2,3
	li	$2,61			# 0x3d
	sb	$2,0($3)
	b	$L19
$L24:
	lw	$2,64($fp)
	lbu	$2,0($2)
	sb	$2,36($fp)
	lbu	$2,36($fp)
	andi	$2,$2,0x3
	sw	$2,24($fp)
	lb	$2,36($fp)
	move	$4,$2
	li	$5,2			# 0x2
	lw	$6,28($fp)
	la	$25,numberToBeConvert
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	sb	$3,0($2)
	lw	$2,24($fp)
	sw	$2,28($fp)
	lw	$2,64($fp)
	addu	$2,$2,1
	lbu	$2,0($2)
	sb	$2,36($fp)
	lbu	$2,36($fp)
	andi	$2,$2,0xf
	sw	$2,24($fp)
	lb	$2,36($fp)
	move	$4,$2
	li	$5,4			# 0x4
	lw	$6,28($fp)
	la	$25,numberToBeConvert
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	addu	$2,$2,1
	sb	$3,0($2)
	lw	$2,24($fp)
	sw	$2,28($fp)
	lw	$2,64($fp)
	addu	$2,$2,2
	lbu	$2,0($2)
	sb	$2,36($fp)
	lbu	$2,36($fp)
	andi	$2,$2,0x3f
	sw	$2,24($fp)
	lb	$2,36($fp)
	move	$4,$2
	li	$5,6			# 0x6
	lw	$6,28($fp)
	la	$25,numberToBeConvert
	jal	$31,$25
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	addu	$2,$2,2
	sb	$3,0($2)
	lw	$2,24($fp)
	sw	$2,32($fp)
	lw	$4,32($fp)
	la	$25,ascii_to_64
	jal	$31,$25
	move	$3,$2
	lw	$2,72($fp)
	addu	$2,$2,3
	sb	$3,0($2)
$L19:
	move	$sp,$fp
	lw	$31,56($sp)
	lw	$fp,52($sp)
	addu	$sp,$sp,64
	j	$31
	.end	_encode_ascii_to_64
	.size	_encode_ascii_to_64, .-_encode_ascii_to_64
	.align	2
	.globl	_decode_64_to_ascii
	.ent	_decode_64_to_ascii
_decode_64_to_ascii:
	.frame	$fp,72,$31		# vars= 32, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,72
	.cprestore 16
	sw	$31,64($sp)
	sw	$fp,60($sp)
	sw	$28,56($sp)
	move	$fp,$sp
	sw	$4,72($fp)
	sw	$5,76($fp)
	sw	$0,24($fp)
	lw	$2,72($fp)
	lbu	$2,0($2)
	sb	$2,28($fp)
	lb	$2,28($fp)
	move	$4,$2
	la	$25,_64_to_ascii
	jal	$31,$25
	sw	$2,40($fp)
	lw	$2,40($fp)
	sll	$2,$2,2
	sw	$2,40($fp)
	lw	$2,72($fp)
	addu	$2,$2,1
	lbu	$2,0($2)
	sb	$2,29($fp)
	lb	$2,29($fp)
	move	$4,$2
	la	$25,_64_to_ascii
	jal	$31,$25
	sw	$2,36($fp)
	lw	$2,36($fp)
	sw	$2,44($fp)
	lw	$2,44($fp)
	sra	$2,$2,4
	sw	$2,44($fp)
	lw	$4,76($fp)
	lbu	$3,40($fp)
	lbu	$2,44($fp)
	addu	$2,$3,$2
	sb	$2,0($4)
	li	$2,1			# 0x1
	sw	$2,24($fp)
	lw	$2,72($fp)
	addu	$2,$2,2
	lb	$3,0($2)
	li	$2,61			# 0x3d
	beq	$3,$2,$L28
	lw	$2,36($fp)
	andi	$2,$2,0xf
	sw	$2,32($fp)
	lw	$2,32($fp)
	sll	$2,$2,4
	sw	$2,32($fp)
	lw	$2,72($fp)
	addu	$2,$2,2
	lbu	$2,0($2)
	sb	$2,28($fp)
	lb	$2,28($fp)
	move	$4,$2
	la	$25,_64_to_ascii
	jal	$31,$25
	sw	$2,36($fp)
	lw	$2,36($fp)
	sw	$2,48($fp)
	lw	$2,48($fp)
	sra	$2,$2,2
	sw	$2,48($fp)
	lw	$2,76($fp)
	addu	$4,$2,1
	lbu	$3,32($fp)
	lbu	$2,48($fp)
	addu	$2,$3,$2
	sb	$2,0($4)
	li	$2,2			# 0x2
	sw	$2,24($fp)
$L28:
	lw	$2,72($fp)
	addu	$2,$2,3
	lb	$3,0($2)
	li	$2,61			# 0x3d
	beq	$3,$2,$L29
	lw	$2,36($fp)
	andi	$2,$2,0x3
	sw	$2,32($fp)
	lw	$2,32($fp)
	sll	$2,$2,6
	sw	$2,32($fp)
	lw	$2,72($fp)
	addu	$2,$2,3
	lbu	$2,0($2)
	sb	$2,28($fp)
	lb	$2,28($fp)
	move	$4,$2
	la	$25,_64_to_ascii
	jal	$31,$25
	sw	$2,36($fp)
	lw	$2,76($fp)
	addu	$4,$2,2
	lbu	$3,32($fp)
	lbu	$2,36($fp)
	addu	$2,$3,$2
	sb	$2,0($4)
	li	$2,3			# 0x3
	sw	$2,24($fp)
$L29:
	lw	$2,24($fp)
	move	$sp,$fp
	lw	$31,64($sp)
	lw	$fp,60($sp)
	addu	$sp,$sp,72
	j	$31
	.end	_decode_64_to_ascii
	.size	_decode_64_to_ascii, .-_decode_64_to_ascii
	.ident	"GCC: (GNU) 3.3.3 (NetBSD nb3 20040520)"
