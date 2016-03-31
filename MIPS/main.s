	.file	1 "main.c"
	.section .mdebug.abi32
	.previous
	.abicalls
	.rdata
	.align	2
$LC0:
	.ascii	"v%f\n\000"
	.align	3
$LC1:
	.word	0
	.word	1072693248
	.text
	.align	2
	.globl	show_version
	.ent	show_version
show_version:
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
	l.d	$f0,$LC1
	la	$4,$LC0
	mfc1	$6,$f0
	mfc1	$7,$f1
	la	$25,printf
	jal	$31,$25
	move	$sp,$fp
	lw	$31,32($sp)
	lw	$fp,28($sp)
	addu	$sp,$sp,40
	j	$31
	.end	show_version
	.size	show_version, .-show_version
	.rdata
	.align	2
$LC2:
	.ascii	"help.txt\000"
	.align	2
$LC3:
	.ascii	"r\000"
	.text
	.align	2
	.globl	show_help
	.ent	show_help
show_help:
	.frame	$fp,352,$31		# vars= 312, regs= 3/0, args= 16, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,352
	.cprestore 16
	sw	$31,344($sp)
	sw	$fp,340($sp)
	sw	$28,336($sp)
	move	$fp,$sp
	la	$4,$LC2
	la	$5,$LC3
	la	$25,fopen
	jal	$31,$25
	sw	$2,24($fp)
	lw	$2,24($fp)
	bne	$2,$0,$L19
	b	$L18
$L19:
	lw	$4,24($fp)
	la	$25,fsize
	jal	$31,$25
	sw	$2,28($fp)
	addu	$2,$fp,32
	move	$4,$2
	li	$5,1			# 0x1
	lw	$6,28($fp)
	lw	$7,24($fp)
	la	$25,fread
	jal	$31,$25
	sb	$0,329($fp)
	addu	$2,$fp,32
	move	$4,$2
	la	$25,puts
	jal	$31,$25
	lw	$4,24($fp)
	la	$25,fclose
	jal	$31,$25
$L18:
	move	$sp,$fp
	lw	$31,344($sp)
	lw	$fp,340($sp)
	addu	$sp,$sp,352
	j	$31
	.end	show_help
	.size	show_help, .-show_help
	.rdata
	.align	2
$LC4:
	.ascii	"w\000"
	.text
	.align	2
	.globl	encode_ascii_to_64
	.ent	encode_ascii_to_64
encode_ascii_to_64:
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
	sb	$0,27($fp)
	sb	$0,36($fp)
	lw	$2,72($fp)
	bne	$2,$0,$L21
	lw	$2,76($fp)
	bne	$2,$0,$L21
	la	$2,__sF
	sw	$2,44($fp)
	la	$2,__sF+88
	sw	$2,48($fp)
	b	$L22
$L21:
	lw	$4,72($fp)
	la	$5,$LC3
	la	$25,fopen
	jal	$31,$25
	sw	$2,44($fp)
	lw	$4,76($fp)
	la	$5,$LC4
	la	$25,fopen
	jal	$31,$25
	sw	$2,48($fp)
$L22:
	lw	$2,44($fp)
	beq	$2,$0,$L20
	lw	$2,48($fp)
	bne	$2,$0,$L23
	b	$L20
$L23:
	sw	$0,40($fp)
$L25:
	lw	$4,44($fp)
	la	$25,fsize
	jal	$31,$25
	lw	$3,40($fp)
	sltu	$2,$3,$2
	bne	$2,$0,$L28
	b	$L26
$L28:
	lw	$4,44($fp)
	addu	$5,$fp,24
	la	$25,get_encode_chars
	jal	$31,$25
	sw	$2,52($fp)
	addu	$2,$fp,32
	addu	$4,$fp,24
	lw	$5,52($fp)
	move	$6,$2
	la	$25,_encode_ascii_to_64
	jal	$31,$25
	addu	$2,$fp,32
	lw	$4,48($fp)
	move	$5,$2
	la	$25,write_code
	jal	$31,$25
	lw	$2,40($fp)
	addu	$2,$2,3
	sw	$2,40($fp)
	b	$L25
$L26:
	lw	$4,44($fp)
	la	$25,fclose
	jal	$31,$25
	lw	$4,48($fp)
	la	$25,fclose
	jal	$31,$25
$L20:
	move	$sp,$fp
	lw	$31,64($sp)
	lw	$fp,60($sp)
	addu	$sp,$sp,72
	j	$31
	.end	encode_ascii_to_64
	.size	encode_ascii_to_64, .-encode_ascii_to_64
	.align	2
	.globl	decode_64_to_ascii
	.ent	decode_64_to_ascii
decode_64_to_ascii:
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
	sb	$0,28($fp)
	sb	$0,35($fp)
	lw	$4,72($fp)
	la	$5,$LC3
	la	$25,fopen
	jal	$31,$25
	sw	$2,40($fp)
	lw	$4,76($fp)
	la	$5,$LC4
	la	$25,fopen
	jal	$31,$25
	sw	$2,44($fp)
	lw	$2,40($fp)
	beq	$2,$0,$L29
	lw	$2,44($fp)
	bne	$2,$0,$L30
	b	$L29
$L30:
	sw	$0,48($fp)
$L32:
	lw	$4,40($fp)
	la	$25,fsize
	jal	$31,$25
	lw	$3,48($fp)
	sltu	$2,$3,$2
	bne	$2,$0,$L35
	b	$L33
$L35:
	lw	$4,40($fp)
	addu	$5,$fp,24
	la	$25,get_decode_chars
	jal	$31,$25
	addu	$2,$fp,32
	addu	$4,$fp,24
	move	$5,$2
	la	$25,_decode_64_to_ascii
	jal	$31,$25
	sw	$2,52($fp)
	addu	$2,$fp,32
	lw	$4,44($fp)
	lw	$5,52($fp)
	move	$6,$2
	la	$25,write_decode
	jal	$31,$25
	lw	$2,48($fp)
	addu	$2,$2,4
	sw	$2,48($fp)
	b	$L32
$L33:
	lw	$4,40($fp)
	la	$25,fclose
	jal	$31,$25
	lw	$4,44($fp)
	la	$25,fclose
	jal	$31,$25
$L29:
	move	$sp,$fp
	lw	$31,64($sp)
	lw	$fp,60($sp)
	addu	$sp,$sp,72
	j	$31
	.end	decode_64_to_ascii
	.size	decode_64_to_ascii, .-decode_64_to_ascii
	.rdata
	.align	2
$LC5:
	.ascii	"version\000"
	.align	2
$LC6:
	.ascii	"help\000"
	.align	2
$LC7:
	.ascii	"output\000"
	.align	2
$LC8:
	.ascii	"input\000"
	.align	2
$LC9:
	.ascii	"decode\000"
	.data
	.align	2
$LC10:
	.word	$LC5
	.word	0
	.word	0
	.word	86
	.word	$LC6
	.word	0
	.word	0
	.word	104
	.word	$LC7
	.word	1
	.word	0
	.word	111
	.word	$LC8
	.word	1
	.word	0
	.word	105
	.word	$LC9
	.word	0
	.word	0
	.word	100
	.globl	memcpy
	.rdata
	.align	2
$LC11:
	.ascii	"Vho:i:d\000"
	.text
	.align	2
	.globl	main
	.ent	main
main:
	.frame	$fp,160,$31		# vars= 112, regs= 3/0, args= 24, extra= 8
	.mask	0xd0000000,-8
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,160
	.cprestore 24
	sw	$31,152($sp)
	sw	$fp,148($sp)
	sw	$28,144($sp)
	move	$fp,$sp
	sw	$4,160($fp)
	sw	$5,164($fp)
	sb	$0,36($fp)
	sb	$0,35($fp)
	sb	$0,34($fp)
	sb	$0,33($fp)
	sb	$0,32($fp)
	sw	$0,44($fp)
	sw	$0,40($fp)
	sw	$0,48($fp)
	addu	$2,$fp,56
	la	$3,$LC10
	move	$4,$2
	move	$5,$3
	li	$6,80			# 0x50
	la	$25,memcpy
	jal	$31,$25
$L37:
	addu	$2,$fp,56
	sw	$0,16($sp)
	lw	$4,160($fp)
	lw	$5,164($fp)
	la	$6,$LC11
	move	$7,$2
	la	$25,getopt_long
	jal	$31,$25
	sw	$2,48($fp)
	lw	$3,48($fp)
	li	$2,-1			# 0xffffffffffffffff
	bne	$3,$2,$L39
	b	$L38
$L39:
	lw	$2,48($fp)
	addu	$2,$2,-86
	sw	$2,136($fp)
	lw	$3,136($fp)
	sltu	$2,$3,26
	beq	$2,$0,$L37
	lw	$2,136($fp)
	sll	$3,$2,2
	la	$2,$L46
	addu	$2,$3,$2
	lw	$2,0($2)
	.cpadd	$2
	j	$2
	.rdata
	.align	2
$L46:
	.gpword	$L41
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L45
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L42
	.gpword	$L44
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L37
	.gpword	$L43
	.text
$L41:
	li	$2,1			# 0x1
	sb	$2,33($fp)
	b	$L37
$L42:
	li	$2,1			# 0x1
	sb	$2,32($fp)
	b	$L37
$L43:
	lw	$2,optarg
	sw	$2,44($fp)
	li	$2,1			# 0x1
	sb	$2,34($fp)
	b	$L37
$L44:
	lw	$2,optarg
	sw	$2,40($fp)
	li	$2,1			# 0x1
	sb	$2,35($fp)
	b	$L37
$L45:
	li	$2,1			# 0x1
	sb	$2,36($fp)
	b	$L37
$L38:
	lbu	$2,32($fp)
	beq	$2,$0,$L48
	la	$25,show_help
	jal	$31,$25
	b	$L49
$L48:
	lbu	$2,33($fp)
	beq	$2,$0,$L50
	la	$25,show_version
	jal	$31,$25
	b	$L49
$L50:
	lbu	$2,35($fp)
	beq	$2,$0,$L52
	lbu	$2,34($fp)
	beq	$2,$0,$L52
	lbu	$2,36($fp)
	beq	$2,$0,$L52
	lw	$4,40($fp)
	lw	$5,44($fp)
	la	$25,decode_64_to_ascii
	jal	$31,$25
	b	$L49
$L52:
	lbu	$2,35($fp)
	beq	$2,$0,$L54
	lbu	$2,34($fp)
	beq	$2,$0,$L54
	lw	$4,40($fp)
	lw	$5,44($fp)
	la	$25,encode_ascii_to_64
	jal	$31,$25
	b	$L49
$L54:
	lhu	$2,__sF+12
	srl	$2,$2,5
	andi	$2,$2,0x1
	bne	$2,$0,$L49
	move	$4,$0
	move	$5,$0
	la	$25,encode_ascii_to_64
	jal	$31,$25
$L49:
	move	$2,$0
	move	$sp,$fp
	lw	$31,152($sp)
	lw	$fp,148($sp)
	addu	$sp,$sp,160
	j	$31
	.end	main
	.size	main, .-main
	.ident	"GCC: (GNU) 3.3.3 (NetBSD nb3 20040520)"
