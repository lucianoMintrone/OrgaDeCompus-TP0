	.file	1 "ascii_64_tables.c"
	.section .mdebug.abi32
	.previous
	.abicalls
	.text
	.align	2
	.globl	_64_to_ascii
	.ent	_64_to_ascii
_64_to_ascii:
	.frame	$fp,24,$31		# vars= 8, regs= 2/0, args= 0, extra= 8
	.mask	0x50000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,24
	.cprestore 0
	sw	$fp,20($sp)
	sw	$28,16($sp)
	move	$fp,$sp
	move	$2,$4
	sb	$2,8($fp)
	lb	$3,8($fp)
	li	$2,61			# 0x3d
	bne	$3,$2,$L2
	sw	$0,12($fp)
	b	$L1
$L2:
	lb	$3,8($fp)
	li	$2,65			# 0x41
	bne	$3,$2,$L3
	sw	$0,12($fp)
	b	$L1
$L3:
	lb	$3,8($fp)
	li	$2,66			# 0x42
	bne	$3,$2,$L4
	li	$2,1			# 0x1
	sw	$2,12($fp)
	b	$L1
$L4:
	lb	$3,8($fp)
	li	$2,67			# 0x43
	bne	$3,$2,$L5
	li	$2,2			# 0x2
	sw	$2,12($fp)
	b	$L1
$L5:
	lb	$3,8($fp)
	li	$2,68			# 0x44
	bne	$3,$2,$L6
	li	$2,3			# 0x3
	sw	$2,12($fp)
	b	$L1
$L6:
	lb	$3,8($fp)
	li	$2,69			# 0x45
	bne	$3,$2,$L7
	li	$2,4			# 0x4
	sw	$2,12($fp)
	b	$L1
$L7:
	lb	$3,8($fp)
	li	$2,70			# 0x46
	bne	$3,$2,$L8
	li	$2,5			# 0x5
	sw	$2,12($fp)
	b	$L1
$L8:
	lb	$3,8($fp)
	li	$2,71			# 0x47
	bne	$3,$2,$L9
	li	$2,6			# 0x6
	sw	$2,12($fp)
	b	$L1
$L9:
	lb	$3,8($fp)
	li	$2,72			# 0x48
	bne	$3,$2,$L10
	li	$2,7			# 0x7
	sw	$2,12($fp)
	b	$L1
$L10:
	lb	$3,8($fp)
	li	$2,73			# 0x49
	bne	$3,$2,$L11
	li	$2,8			# 0x8
	sw	$2,12($fp)
	b	$L1
$L11:
	lb	$3,8($fp)
	li	$2,74			# 0x4a
	bne	$3,$2,$L12
	li	$2,9			# 0x9
	sw	$2,12($fp)
	b	$L1
$L12:
	lb	$3,8($fp)
	li	$2,75			# 0x4b
	bne	$3,$2,$L13
	li	$2,10			# 0xa
	sw	$2,12($fp)
	b	$L1
$L13:
	lb	$3,8($fp)
	li	$2,76			# 0x4c
	bne	$3,$2,$L14
	li	$2,11			# 0xb
	sw	$2,12($fp)
	b	$L1
$L14:
	lb	$3,8($fp)
	li	$2,77			# 0x4d
	bne	$3,$2,$L15
	li	$2,12			# 0xc
	sw	$2,12($fp)
	b	$L1
$L15:
	lb	$3,8($fp)
	li	$2,78			# 0x4e
	bne	$3,$2,$L16
	li	$2,13			# 0xd
	sw	$2,12($fp)
	b	$L1
$L16:
	lb	$3,8($fp)
	li	$2,79			# 0x4f
	bne	$3,$2,$L17
	li	$2,14			# 0xe
	sw	$2,12($fp)
	b	$L1
$L17:
	lb	$3,8($fp)
	li	$2,80			# 0x50
	bne	$3,$2,$L18
	li	$2,15			# 0xf
	sw	$2,12($fp)
	b	$L1
$L18:
	lb	$3,8($fp)
	li	$2,81			# 0x51
	bne	$3,$2,$L19
	li	$2,16			# 0x10
	sw	$2,12($fp)
	b	$L1
$L19:
	lb	$3,8($fp)
	li	$2,82			# 0x52
	bne	$3,$2,$L20
	li	$2,17			# 0x11
	sw	$2,12($fp)
	b	$L1
$L20:
	lb	$3,8($fp)
	li	$2,83			# 0x53
	bne	$3,$2,$L21
	li	$2,18			# 0x12
	sw	$2,12($fp)
	b	$L1
$L21:
	lb	$3,8($fp)
	li	$2,84			# 0x54
	bne	$3,$2,$L22
	li	$2,19			# 0x13
	sw	$2,12($fp)
	b	$L1
$L22:
	lb	$3,8($fp)
	li	$2,85			# 0x55
	bne	$3,$2,$L23
	li	$2,20			# 0x14
	sw	$2,12($fp)
	b	$L1
$L23:
	lb	$3,8($fp)
	li	$2,86			# 0x56
	bne	$3,$2,$L24
	li	$2,21			# 0x15
	sw	$2,12($fp)
	b	$L1
$L24:
	lb	$3,8($fp)
	li	$2,87			# 0x57
	bne	$3,$2,$L25
	li	$2,22			# 0x16
	sw	$2,12($fp)
	b	$L1
$L25:
	lb	$3,8($fp)
	li	$2,88			# 0x58
	bne	$3,$2,$L26
	li	$2,23			# 0x17
	sw	$2,12($fp)
	b	$L1
$L26:
	lb	$3,8($fp)
	li	$2,89			# 0x59
	bne	$3,$2,$L27
	li	$2,24			# 0x18
	sw	$2,12($fp)
	b	$L1
$L27:
	lb	$3,8($fp)
	li	$2,90			# 0x5a
	bne	$3,$2,$L28
	li	$2,25			# 0x19
	sw	$2,12($fp)
	b	$L1
$L28:
	lb	$3,8($fp)
	li	$2,97			# 0x61
	bne	$3,$2,$L29
	li	$2,26			# 0x1a
	sw	$2,12($fp)
	b	$L1
$L29:
	lb	$3,8($fp)
	li	$2,98			# 0x62
	bne	$3,$2,$L30
	li	$2,27			# 0x1b
	sw	$2,12($fp)
	b	$L1
$L30:
	lb	$3,8($fp)
	li	$2,99			# 0x63
	bne	$3,$2,$L31
	li	$2,28			# 0x1c
	sw	$2,12($fp)
	b	$L1
$L31:
	lb	$3,8($fp)
	li	$2,100			# 0x64
	bne	$3,$2,$L32
	li	$2,29			# 0x1d
	sw	$2,12($fp)
	b	$L1
$L32:
	lb	$3,8($fp)
	li	$2,101			# 0x65
	bne	$3,$2,$L33
	li	$2,30			# 0x1e
	sw	$2,12($fp)
	b	$L1
$L33:
	lb	$3,8($fp)
	li	$2,102			# 0x66
	bne	$3,$2,$L34
	li	$2,31			# 0x1f
	sw	$2,12($fp)
	b	$L1
$L34:
	lb	$3,8($fp)
	li	$2,103			# 0x67
	bne	$3,$2,$L35
	li	$2,32			# 0x20
	sw	$2,12($fp)
	b	$L1
$L35:
	lb	$3,8($fp)
	li	$2,104			# 0x68
	bne	$3,$2,$L36
	li	$2,33			# 0x21
	sw	$2,12($fp)
	b	$L1
$L36:
	lb	$3,8($fp)
	li	$2,105			# 0x69
	bne	$3,$2,$L37
	li	$2,34			# 0x22
	sw	$2,12($fp)
	b	$L1
$L37:
	lb	$3,8($fp)
	li	$2,106			# 0x6a
	bne	$3,$2,$L38
	li	$2,35			# 0x23
	sw	$2,12($fp)
	b	$L1
$L38:
	lb	$3,8($fp)
	li	$2,107			# 0x6b
	bne	$3,$2,$L39
	li	$2,36			# 0x24
	sw	$2,12($fp)
	b	$L1
$L39:
	lb	$3,8($fp)
	li	$2,108			# 0x6c
	bne	$3,$2,$L40
	li	$2,37			# 0x25
	sw	$2,12($fp)
	b	$L1
$L40:
	lb	$3,8($fp)
	li	$2,109			# 0x6d
	bne	$3,$2,$L41
	li	$2,38			# 0x26
	sw	$2,12($fp)
	b	$L1
$L41:
	lb	$3,8($fp)
	li	$2,110			# 0x6e
	bne	$3,$2,$L42
	li	$2,39			# 0x27
	sw	$2,12($fp)
	b	$L1
$L42:
	lb	$3,8($fp)
	li	$2,111			# 0x6f
	bne	$3,$2,$L43
	li	$2,40			# 0x28
	sw	$2,12($fp)
	b	$L1
$L43:
	lb	$3,8($fp)
	li	$2,112			# 0x70
	bne	$3,$2,$L44
	li	$2,41			# 0x29
	sw	$2,12($fp)
	b	$L1
$L44:
	lb	$3,8($fp)
	li	$2,113			# 0x71
	bne	$3,$2,$L45
	li	$2,42			# 0x2a
	sw	$2,12($fp)
	b	$L1
$L45:
	lb	$3,8($fp)
	li	$2,114			# 0x72
	bne	$3,$2,$L46
	li	$2,43			# 0x2b
	sw	$2,12($fp)
	b	$L1
$L46:
	lb	$3,8($fp)
	li	$2,115			# 0x73
	bne	$3,$2,$L47
	li	$2,44			# 0x2c
	sw	$2,12($fp)
	b	$L1
$L47:
	lb	$3,8($fp)
	li	$2,116			# 0x74
	bne	$3,$2,$L48
	li	$2,45			# 0x2d
	sw	$2,12($fp)
	b	$L1
$L48:
	lb	$3,8($fp)
	li	$2,117			# 0x75
	bne	$3,$2,$L49
	li	$2,46			# 0x2e
	sw	$2,12($fp)
	b	$L1
$L49:
	lb	$3,8($fp)
	li	$2,118			# 0x76
	bne	$3,$2,$L50
	li	$2,47			# 0x2f
	sw	$2,12($fp)
	b	$L1
$L50:
	lb	$3,8($fp)
	li	$2,119			# 0x77
	bne	$3,$2,$L51
	li	$2,48			# 0x30
	sw	$2,12($fp)
	b	$L1
$L51:
	lb	$3,8($fp)
	li	$2,120			# 0x78
	bne	$3,$2,$L52
	li	$2,49			# 0x31
	sw	$2,12($fp)
	b	$L1
$L52:
	lb	$3,8($fp)
	li	$2,121			# 0x79
	bne	$3,$2,$L53
	li	$2,50			# 0x32
	sw	$2,12($fp)
	b	$L1
$L53:
	lb	$3,8($fp)
	li	$2,122			# 0x7a
	bne	$3,$2,$L54
	li	$2,51			# 0x33
	sw	$2,12($fp)
	b	$L1
$L54:
	lb	$3,8($fp)
	li	$2,48			# 0x30
	bne	$3,$2,$L55
	li	$2,52			# 0x34
	sw	$2,12($fp)
	b	$L1
$L55:
	lb	$3,8($fp)
	li	$2,49			# 0x31
	bne	$3,$2,$L56
	li	$2,53			# 0x35
	sw	$2,12($fp)
	b	$L1
$L56:
	lb	$3,8($fp)
	li	$2,50			# 0x32
	bne	$3,$2,$L57
	li	$2,54			# 0x36
	sw	$2,12($fp)
	b	$L1
$L57:
	lb	$3,8($fp)
	li	$2,51			# 0x33
	bne	$3,$2,$L58
	li	$2,55			# 0x37
	sw	$2,12($fp)
	b	$L1
$L58:
	lb	$3,8($fp)
	li	$2,52			# 0x34
	bne	$3,$2,$L59
	li	$2,56			# 0x38
	sw	$2,12($fp)
	b	$L1
$L59:
	lb	$3,8($fp)
	li	$2,53			# 0x35
	bne	$3,$2,$L60
	li	$2,57			# 0x39
	sw	$2,12($fp)
	b	$L1
$L60:
	lb	$3,8($fp)
	li	$2,54			# 0x36
	bne	$3,$2,$L61
	li	$2,58			# 0x3a
	sw	$2,12($fp)
	b	$L1
$L61:
	lb	$3,8($fp)
	li	$2,55			# 0x37
	bne	$3,$2,$L62
	li	$2,59			# 0x3b
	sw	$2,12($fp)
	b	$L1
$L62:
	lb	$3,8($fp)
	li	$2,56			# 0x38
	bne	$3,$2,$L63
	li	$2,60			# 0x3c
	sw	$2,12($fp)
	b	$L1
$L63:
	lb	$3,8($fp)
	li	$2,57			# 0x39
	bne	$3,$2,$L64
	li	$2,61			# 0x3d
	sw	$2,12($fp)
	b	$L1
$L64:
	lb	$3,8($fp)
	li	$2,43			# 0x2b
	bne	$3,$2,$L65
	li	$2,62			# 0x3e
	sw	$2,12($fp)
	b	$L1
$L65:
	lb	$3,8($fp)
	li	$2,47			# 0x2f
	bne	$3,$2,$L66
	li	$2,63			# 0x3f
	sw	$2,12($fp)
	b	$L1
$L66:
	sw	$0,12($fp)
$L1:
	lw	$2,12($fp)
	move	$sp,$fp
	lw	$fp,20($sp)
	addu	$sp,$sp,24
	j	$31
	.end	_64_to_ascii
	.size	_64_to_ascii, .-_64_to_ascii
	.align	2
	.globl	ascii_to_64
	.ent	ascii_to_64
ascii_to_64:
	.frame	$fp,24,$31		# vars= 8, regs= 2/0, args= 0, extra= 8
	.mask	0x50000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.cpload	$25
	.set	reorder
	subu	$sp,$sp,24
	.cprestore 0
	sw	$fp,20($sp)
	sw	$28,16($sp)
	move	$fp,$sp
	sw	$4,24($fp)
	lw	$2,24($fp)
	sltu	$2,$2,64
	beq	$2,$0,$L133
	lw	$2,24($fp)
	sll	$3,$2,2
	la	$2,$L134
	addu	$2,$3,$2
	lw	$2,0($2)
	.cpadd	$2
	j	$2
	.rdata
	.align	2
$L134:
	.gpword	$L69
	.gpword	$L70
	.gpword	$L71
	.gpword	$L72
	.gpword	$L73
	.gpword	$L74
	.gpword	$L75
	.gpword	$L76
	.gpword	$L77
	.gpword	$L78
	.gpword	$L79
	.gpword	$L80
	.gpword	$L81
	.gpword	$L82
	.gpword	$L83
	.gpword	$L84
	.gpword	$L85
	.gpword	$L86
	.gpword	$L87
	.gpword	$L88
	.gpword	$L89
	.gpword	$L90
	.gpword	$L91
	.gpword	$L92
	.gpword	$L93
	.gpword	$L94
	.gpword	$L95
	.gpword	$L96
	.gpword	$L97
	.gpword	$L98
	.gpword	$L99
	.gpword	$L100
	.gpword	$L101
	.gpword	$L102
	.gpword	$L103
	.gpword	$L104
	.gpword	$L105
	.gpword	$L106
	.gpword	$L107
	.gpword	$L108
	.gpword	$L109
	.gpword	$L110
	.gpword	$L111
	.gpword	$L112
	.gpword	$L113
	.gpword	$L114
	.gpword	$L115
	.gpword	$L116
	.gpword	$L117
	.gpword	$L118
	.gpword	$L119
	.gpword	$L120
	.gpword	$L121
	.gpword	$L122
	.gpword	$L123
	.gpword	$L124
	.gpword	$L125
	.gpword	$L126
	.gpword	$L127
	.gpword	$L128
	.gpword	$L129
	.gpword	$L130
	.gpword	$L131
	.gpword	$L132
	.text
$L69:
	li	$2,65			# 0x41
	sw	$2,8($fp)
	b	$L67
$L70:
	li	$2,66			# 0x42
	sw	$2,8($fp)
	b	$L67
$L71:
	li	$2,67			# 0x43
	sw	$2,8($fp)
	b	$L67
$L72:
	li	$2,68			# 0x44
	sw	$2,8($fp)
	b	$L67
$L73:
	li	$2,69			# 0x45
	sw	$2,8($fp)
	b	$L67
$L74:
	li	$2,70			# 0x46
	sw	$2,8($fp)
	b	$L67
$L75:
	li	$2,71			# 0x47
	sw	$2,8($fp)
	b	$L67
$L76:
	li	$2,72			# 0x48
	sw	$2,8($fp)
	b	$L67
$L77:
	li	$2,73			# 0x49
	sw	$2,8($fp)
	b	$L67
$L78:
	li	$2,74			# 0x4a
	sw	$2,8($fp)
	b	$L67
$L79:
	li	$2,75			# 0x4b
	sw	$2,8($fp)
	b	$L67
$L80:
	li	$2,76			# 0x4c
	sw	$2,8($fp)
	b	$L67
$L81:
	li	$2,77			# 0x4d
	sw	$2,8($fp)
	b	$L67
$L82:
	li	$2,78			# 0x4e
	sw	$2,8($fp)
	b	$L67
$L83:
	li	$2,79			# 0x4f
	sw	$2,8($fp)
	b	$L67
$L84:
	li	$2,80			# 0x50
	sw	$2,8($fp)
	b	$L67
$L85:
	li	$2,81			# 0x51
	sw	$2,8($fp)
	b	$L67
$L86:
	li	$2,82			# 0x52
	sw	$2,8($fp)
	b	$L67
$L87:
	li	$2,83			# 0x53
	sw	$2,8($fp)
	b	$L67
$L88:
	li	$2,84			# 0x54
	sw	$2,8($fp)
	b	$L67
$L89:
	li	$2,85			# 0x55
	sw	$2,8($fp)
	b	$L67
$L90:
	li	$2,86			# 0x56
	sw	$2,8($fp)
	b	$L67
$L91:
	li	$2,87			# 0x57
	sw	$2,8($fp)
	b	$L67
$L92:
	li	$2,88			# 0x58
	sw	$2,8($fp)
	b	$L67
$L93:
	li	$2,89			# 0x59
	sw	$2,8($fp)
	b	$L67
$L94:
	li	$2,90			# 0x5a
	sw	$2,8($fp)
	b	$L67
$L95:
	li	$2,97			# 0x61
	sw	$2,8($fp)
	b	$L67
$L96:
	li	$2,98			# 0x62
	sw	$2,8($fp)
	b	$L67
$L97:
	li	$2,99			# 0x63
	sw	$2,8($fp)
	b	$L67
$L98:
	li	$2,100			# 0x64
	sw	$2,8($fp)
	b	$L67
$L99:
	li	$2,101			# 0x65
	sw	$2,8($fp)
	b	$L67
$L100:
	li	$2,102			# 0x66
	sw	$2,8($fp)
	b	$L67
$L101:
	li	$2,103			# 0x67
	sw	$2,8($fp)
	b	$L67
$L102:
	li	$2,104			# 0x68
	sw	$2,8($fp)
	b	$L67
$L103:
	li	$2,105			# 0x69
	sw	$2,8($fp)
	b	$L67
$L104:
	li	$2,106			# 0x6a
	sw	$2,8($fp)
	b	$L67
$L105:
	li	$2,107			# 0x6b
	sw	$2,8($fp)
	b	$L67
$L106:
	li	$2,108			# 0x6c
	sw	$2,8($fp)
	b	$L67
$L107:
	li	$2,109			# 0x6d
	sw	$2,8($fp)
	b	$L67
$L108:
	li	$2,110			# 0x6e
	sw	$2,8($fp)
	b	$L67
$L109:
	li	$2,111			# 0x6f
	sw	$2,8($fp)
	b	$L67
$L110:
	li	$2,112			# 0x70
	sw	$2,8($fp)
	b	$L67
$L111:
	li	$2,113			# 0x71
	sw	$2,8($fp)
	b	$L67
$L112:
	li	$2,114			# 0x72
	sw	$2,8($fp)
	b	$L67
$L113:
	li	$2,115			# 0x73
	sw	$2,8($fp)
	b	$L67
$L114:
	li	$2,116			# 0x74
	sw	$2,8($fp)
	b	$L67
$L115:
	li	$2,117			# 0x75
	sw	$2,8($fp)
	b	$L67
$L116:
	li	$2,118			# 0x76
	sw	$2,8($fp)
	b	$L67
$L117:
	li	$2,119			# 0x77
	sw	$2,8($fp)
	b	$L67
$L118:
	li	$2,120			# 0x78
	sw	$2,8($fp)
	b	$L67
$L119:
	li	$2,121			# 0x79
	sw	$2,8($fp)
	b	$L67
$L120:
	li	$2,122			# 0x7a
	sw	$2,8($fp)
	b	$L67
$L121:
	li	$2,48			# 0x30
	sw	$2,8($fp)
	b	$L67
$L122:
	li	$2,49			# 0x31
	sw	$2,8($fp)
	b	$L67
$L123:
	li	$2,50			# 0x32
	sw	$2,8($fp)
	b	$L67
$L124:
	li	$2,51			# 0x33
	sw	$2,8($fp)
	b	$L67
$L125:
	li	$2,52			# 0x34
	sw	$2,8($fp)
	b	$L67
$L126:
	li	$2,53			# 0x35
	sw	$2,8($fp)
	b	$L67
$L127:
	li	$2,54			# 0x36
	sw	$2,8($fp)
	b	$L67
$L128:
	li	$2,55			# 0x37
	sw	$2,8($fp)
	b	$L67
$L129:
	li	$2,56			# 0x38
	sw	$2,8($fp)
	b	$L67
$L130:
	li	$2,57			# 0x39
	sw	$2,8($fp)
	b	$L67
$L131:
	li	$2,43			# 0x2b
	sw	$2,8($fp)
	b	$L67
$L132:
	li	$2,47			# 0x2f
	sw	$2,8($fp)
	b	$L67
$L133:
	li	$2,65			# 0x41
	sw	$2,8($fp)
$L67:
	lw	$2,8($fp)
	move	$sp,$fp
	lw	$fp,20($sp)
	addu	$sp,$sp,24
	j	$31
	.end	ascii_to_64
	.size	ascii_to_64, .-ascii_to_64
	.ident	"GCC: (GNU) 3.3.3 (NetBSD nb3 20040520)"
