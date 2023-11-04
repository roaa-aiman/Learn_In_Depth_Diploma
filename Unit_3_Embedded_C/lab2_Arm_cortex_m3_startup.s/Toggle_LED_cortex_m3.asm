
Toggle_LED_cortex_m3.elf:     file format elf32-littlearm


Disassembly of section .text:

08000000 <main>:
 8000000:	b480      	push	{r7}
 8000002:	b083      	sub	sp, #12
 8000004:	af00      	add	r7, sp, #0
 8000006:	f241 0318 	movw	r3, #4120	; 0x1018
 800000a:	f2c4 0302 	movt	r3, #16386	; 0x4002
 800000e:	f241 0218 	movw	r2, #4120	; 0x1018
 8000012:	f2c4 0202 	movt	r2, #16386	; 0x4002
 8000016:	6812      	ldr	r2, [r2, #0]
 8000018:	f042 0204 	orr.w	r2, r2, #4
 800001c:	601a      	str	r2, [r3, #0]
 800001e:	f640 0304 	movw	r3, #2052	; 0x804
 8000022:	f2c4 0301 	movt	r3, #16385	; 0x4001
 8000026:	f640 0204 	movw	r2, #2052	; 0x804
 800002a:	f2c4 0201 	movt	r2, #16385	; 0x4001
 800002e:	6812      	ldr	r2, [r2, #0]
 8000030:	f422 1280 	bic.w	r2, r2, #1048576	; 0x100000
 8000034:	601a      	str	r2, [r3, #0]
 8000036:	f640 0304 	movw	r3, #2052	; 0x804
 800003a:	f2c4 0301 	movt	r3, #16385	; 0x4001
 800003e:	f640 0204 	movw	r2, #2052	; 0x804
 8000042:	f2c4 0201 	movt	r2, #16385	; 0x4001
 8000046:	6812      	ldr	r2, [r2, #0]
 8000048:	f442 1200 	orr.w	r2, r2, #2097152	; 0x200000
 800004c:	601a      	str	r2, [r3, #0]
 800004e:	f640 0304 	movw	r3, #2052	; 0x804
 8000052:	f2c4 0301 	movt	r3, #16385	; 0x4001
 8000056:	f640 0204 	movw	r2, #2052	; 0x804
 800005a:	f2c4 0201 	movt	r2, #16385	; 0x4001
 800005e:	6812      	ldr	r2, [r2, #0]
 8000060:	f422 0280 	bic.w	r2, r2, #4194304	; 0x400000
 8000064:	601a      	str	r2, [r3, #0]
 8000066:	f640 0304 	movw	r3, #2052	; 0x804
 800006a:	f2c4 0301 	movt	r3, #16385	; 0x4001
 800006e:	f640 0204 	movw	r2, #2052	; 0x804
 8000072:	f2c4 0201 	movt	r2, #16385	; 0x4001
 8000076:	6812      	ldr	r2, [r2, #0]
 8000078:	f422 0200 	bic.w	r2, r2, #8388608	; 0x800000
 800007c:	601a      	str	r2, [r3, #0]
 800007e:	f640 030c 	movw	r3, #2060	; 0x80c
 8000082:	f2c4 0301 	movt	r3, #16385	; 0x4001
 8000086:	f640 020c 	movw	r2, #2060	; 0x80c
 800008a:	f2c4 0201 	movt	r2, #16385	; 0x4001
 800008e:	6812      	ldr	r2, [r2, #0]
 8000090:	f442 5200 	orr.w	r2, r2, #8192	; 0x2000
 8000094:	601a      	str	r2, [r3, #0]
 8000096:	f04f 0300 	mov.w	r3, #0
 800009a:	607b      	str	r3, [r7, #4]
 800009c:	e003      	b.n	80000a6 <main+0xa6>
 800009e:	687b      	ldr	r3, [r7, #4]
 80000a0:	f103 0301 	add.w	r3, r3, #1
 80000a4:	607b      	str	r3, [r7, #4]
 80000a6:	687a      	ldr	r2, [r7, #4]
 80000a8:	f240 13f3 	movw	r3, #499	; 0x1f3
 80000ac:	429a      	cmp	r2, r3
 80000ae:	ddf6      	ble.n	800009e <main+0x9e>
 80000b0:	f640 030c 	movw	r3, #2060	; 0x80c
 80000b4:	f2c4 0301 	movt	r3, #16385	; 0x4001
 80000b8:	f640 020c 	movw	r2, #2060	; 0x80c
 80000bc:	f2c4 0201 	movt	r2, #16385	; 0x4001
 80000c0:	6812      	ldr	r2, [r2, #0]
 80000c2:	f422 5200 	bic.w	r2, r2, #8192	; 0x2000
 80000c6:	601a      	str	r2, [r3, #0]
 80000c8:	f04f 0300 	mov.w	r3, #0
 80000cc:	603b      	str	r3, [r7, #0]
 80000ce:	e003      	b.n	80000d8 <main+0xd8>
 80000d0:	683b      	ldr	r3, [r7, #0]
 80000d2:	f103 0301 	add.w	r3, r3, #1
 80000d6:	603b      	str	r3, [r7, #0]
 80000d8:	683a      	ldr	r2, [r7, #0]
 80000da:	f240 13f3 	movw	r3, #499	; 0x1f3
 80000de:	429a      	cmp	r2, r3
 80000e0:	ddf6      	ble.n	80000d0 <main+0xd0>
 80000e2:	e7cc      	b.n	800007e <main+0x7e>

Disassembly of section .data:

20000000 <R_ODR>:
20000000:	4001080c 	andmi	r0, r1, ip, lsl #16

Disassembly of section .bss:

20000004 <_E_BSS>:
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	00000147 	andeq	r0, r0, r7, asr #2
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	00000022 	andeq	r0, r0, r2, lsr #32
  10:	00001601 	andeq	r1, r0, r1, lsl #12
  14:	00004f00 	andeq	r4, r0, r0, lsl #30
  18:	00000000 	andeq	r0, r0, r0
  1c:	0000e408 	andeq	lr, r0, r8, lsl #8
  20:	00000008 	andeq	r0, r0, r8
  24:	02010200 	andeq	r0, r1, #0, 4
  28:	000000e0 	andeq	r0, r0, r0, ror #1
  2c:	ce080102 	adfgte	f0, f0, f2
  30:	02000000 	andeq	r0, r0, #0
  34:	00c70601 	sbceq	r0, r7, r1, lsl #12
  38:	02020000 	andeq	r0, r2, #0
  3c:	0000ff05 	andeq	pc, r0, r5, lsl #30
  40:	05040300 	streq	r0, [r4, #-768]	; 0x300
  44:	00746e69 	rsbseq	r6, r4, r9, ror #28
  48:	00050802 	andeq	r0, r5, r2, lsl #16
  4c:	02000000 	andeq	r0, r0, #0
  50:	00c50801 	sbceq	r0, r5, r1, lsl #16
  54:	02020000 	andeq	r0, r2, #0
  58:	0000e607 	andeq	lr, r0, r7, lsl #12
  5c:	07040200 	streq	r0, [r4, -r0, lsl #4]
  60:	00000038 	andeq	r0, r0, r8, lsr r0
  64:	2e070802 	cdpcs	8, 0, cr0, cr7, cr2, {0}
  68:	04000000 	streq	r0, [r0], #-0
  6c:	00000045 	andeq	r0, r0, r5, asr #32
  70:	00762902 	rsbseq	r2, r6, r2, lsl #18
  74:	5d050000 	stcpl	0, cr0, [r5, #-0]
  78:	02000000 	andeq	r0, r0, #0
  7c:	00f90404 	rscseq	r0, r9, r4, lsl #8
  80:	08020000 	stmdaeq	r2, {}	; <UNPREDICTABLE>
  84:	0000d304 	andeq	sp, r0, r4, lsl #6
  88:	01040600 	tsteq	r4, r0, lsl #12
  8c:	0000b423 	andeq	fp, r0, r3, lsr #8
  90:	01090700 	tsteq	r9, r0, lsl #14
  94:	25010000 	strcs	r0, [r1, #-0]
  98:	0000006b 	andeq	r0, r0, fp, rrx
  9c:	02130d04 	andseq	r0, r3, #4, 26	; 0x100
  a0:	b5070023 	strlt	r0, [r7, #-35]	; 0x23
  a4:	01000000 	mrseq	r0, (UNDEF: 0)
  a8:	00006b26 	andeq	r6, r0, r6, lsr #22
  ac:	12010400 	andne	r0, r1, #0, 8
  b0:	00002302 	andeq	r2, r0, r2, lsl #6
  b4:	20010408 	andcs	r0, r1, r8, lsl #8
  b8:	000000d3 	ldrdeq	r0, [r0], -r3
  bc:	0000ba09 	andeq	fp, r0, r9, lsl #20
  c0:	6b220100 	blvs	8804c8 <main-0x777fb38>
  c4:	0a000000 	beq	cc <main-0x7ffff34>
  c8:	006e6970 	rsbeq	r6, lr, r0, ror r9
  cc:	00892701 	addeq	r2, r9, r1, lsl #14
  d0:	04000000 	streq	r0, [r0], #-0
  d4:	0000000e 	andeq	r0, r0, lr
  d8:	00b42801 	adcseq	r2, r4, r1, lsl #16
  dc:	010b0000 	mrseq	r0, (UNDEF: 11)
  e0:	0000001d 	andeq	r0, r0, sp, lsl r0
  e4:	41012c01 	tstmi	r1, r1, lsl #24
  e8:	00000000 	andeq	r0, r0, r0
  ec:	e4080000 	str	r0, [r8], #-0
  f0:	00080000 	andeq	r0, r8, r0
  f4:	01000000 	mrseq	r0, (UNDEF: 0)
  f8:	0000012d 	andeq	r0, r0, sp, lsr #2
  fc:	0000960c 	andeq	r9, r0, ip, lsl #12
 100:	0000b008 	andeq	fp, r0, r8
 104:	00011608 	andeq	r1, r1, r8, lsl #12
 108:	00690d00 	rsbeq	r0, r9, r0, lsl #26
 10c:	00413901 	subeq	r3, r1, r1, lsl #18
 110:	91020000 	mrsls	r0, (UNDEF: 2)
 114:	c80e0074 	stmdagt	lr, {r2, r4, r5, r6}
 118:	e2080000 	and	r0, r8, #0
 11c:	0d080000 	stceq	0, cr0, [r8, #-0]
 120:	3d010069 	stccc	0, cr0, [r1, #-420]	; 0xfffffe5c
 124:	00000041 	andeq	r0, r0, r1, asr #32
 128:	00709102 	rsbseq	r9, r0, r2, lsl #2
 12c:	00da0f00 	sbcseq	r0, sl, r0, lsl #30
 130:	2a010000 	bcs	40138 <main-0x7fbfec8>
 134:	0000013f 	andeq	r0, r0, pc, lsr r1
 138:	00030501 	andeq	r0, r3, r1, lsl #10
 13c:	10200000 	eorne	r0, r0, r0
 140:	00014504 	andeq	r4, r1, r4, lsl #10
 144:	00d30500 	sbcseq	r0, r3, r0, lsl #10
 148:	Address 0x00000148 is out of bounds.


Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0b0b0024 	bleq	2c00ac <main-0x7d3ff54>
  18:	0e030b3e 	vmoveq.16	d3[0], r0
  1c:	24030000 	strcs	r0, [r3], #-0
  20:	3e0b0b00 	vmlacc.f64	d0, d11, d0
  24:	0008030b 	andeq	r0, r8, fp, lsl #6
  28:	00160400 	andseq	r0, r6, r0, lsl #8
  2c:	0b3a0e03 	bleq	e83840 <main-0x717c7c0>
  30:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  34:	35050000 	strcc	r0, [r5, #-0]
  38:	00134900 	andseq	r4, r3, r0, lsl #18
  3c:	01130600 	tsteq	r3, r0, lsl #12
  40:	0b3a0b0b 	bleq	e82c74 <main-0x717d38c>
  44:	13010b3b 	movwne	r0, #6971	; 0x1b3b
  48:	0d070000 	stceq	0, cr0, [r7, #-0]
  4c:	3a0e0300 	bcc	380c54 <main-0x7c7f3ac>
  50:	490b3b0b 	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  54:	0d0b0b13 	vstreq	d0, [fp, #-76]	; 0xffffffb4
  58:	380b0c0b 	stmdacc	fp, {r0, r1, r3, sl, fp}
  5c:	0800000a 	stmdaeq	r0, {r1, r3}
  60:	0b0b0117 	bleq	2c04c4 <main-0x7d3fb3c>
  64:	0b3b0b3a 	bleq	ec2d54 <main-0x713d2ac>
  68:	00001301 	andeq	r1, r0, r1, lsl #6
  6c:	03000d09 	movweq	r0, #3337	; 0xd09
  70:	3b0b3a0e 	blcc	2ce8b0 <main-0x7d31750>
  74:	0013490b 	andseq	r4, r3, fp, lsl #18
  78:	000d0a00 	andeq	r0, sp, r0, lsl #20
  7c:	0b3a0803 	bleq	e82090 <main-0x717df70>
  80:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  84:	2e0b0000 	cdpcs	0, 0, cr0, cr11, cr0, {0}
  88:	030c3f01 	movweq	r3, #52993	; 0xcf01
  8c:	3b0b3a0e 	blcc	2ce8cc <main-0x7d31734>
  90:	490c270b 	stmdbmi	ip, {r0, r1, r3, r8, r9, sl, sp}
  94:	12011113 	andne	r1, r1, #-1073741820	; 0xc0000004
  98:	97064001 	strls	r4, [r6, -r1]
  9c:	13010c42 	movwne	r0, #7234	; 0x1c42
  a0:	0b0c0000 	bleq	3000a8 <main-0x7cfff58>
  a4:	12011101 	andne	r1, r1, #1073741824	; 0x40000000
  a8:	00130101 	andseq	r0, r3, r1, lsl #2
  ac:	00340d00 	eorseq	r0, r4, r0, lsl #26
  b0:	0b3a0803 	bleq	e820c4 <main-0x717df3c>
  b4:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  b8:	00000a02 	andeq	r0, r0, r2, lsl #20
  bc:	11010b0e 	tstne	r1, lr, lsl #22
  c0:	00011201 	andeq	r1, r1, r1, lsl #4
  c4:	00340f00 	eorseq	r0, r4, r0, lsl #30
  c8:	0b3a0e03 	bleq	e838dc <main-0x717c724>
  cc:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  d0:	0a020c3f 	beq	831d4 <main-0x7f7ce2c>
  d4:	0f100000 	svceq	0x00100000
  d8:	490b0b00 	stmdbmi	fp, {r8, r9, fp}
  dc:	00000013 	andeq	r0, r0, r3, lsl r0

Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000002 	andeq	r0, r0, r2
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000002 	andeq	r0, r0, r2
  10:	00000004 	andeq	r0, r0, r4
  14:	047d0002 	ldrbteq	r0, [sp], #-2
  18:	00000004 	andeq	r0, r0, r4
  1c:	00000006 	andeq	r0, r0, r6
  20:	107d0002 	rsbsne	r0, sp, r2
  24:	00000006 	andeq	r0, r0, r6
  28:	000000e4 	andeq	r0, r0, r4, ror #1
  2c:	10770002 	rsbsne	r0, r7, r2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
   c:	00000000 	andeq	r0, r0, r0
  10:	08000000 	stmdaeq	r0, {}	; <UNPREDICTABLE>
  14:	000000e4 	andeq	r0, r0, r4, ror #1
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	00000068 	andeq	r0, r0, r8, rrx
   4:	00310002 	eorseq	r0, r1, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	6e69616d 	powvsez	f6, f1, #5.0
  20:	0000632e 	andeq	r6, r0, lr, lsr #6
  24:	6c500000 	mravs	r0, r0, acc0
  28:	6f667461 	svcvs	0x00667461
  2c:	545f6d72 	ldrbpl	r6, [pc], #-3442	; 34 <main-0x7ffffcc>
  30:	73657079 	cmnvc	r5, #121	; 0x79
  34:	0000682e 	andeq	r6, r0, lr, lsr #16
  38:	00000000 	andeq	r0, r0, r0
  3c:	00000205 	andeq	r0, r0, r5, lsl #4
  40:	2c030800 	stccs	8, cr0, [r3], {-0}
  44:	bbbb3d01 	bllt	feecf450 <_STACK_TOP+0xdeece44c>
  48:	bcbfbbbb 	fldmiaxlt	pc!, {d11-d103}	;@ Deprecated
  4c:	02040200 	andeq	r0, r4, #0, 4
  50:	02004a06 	andeq	r4, r0, #24576	; 0x6000
  54:	064a0104 	strbeq	r0, [sl], -r4, lsl #2
  58:	0200bc5a 	andeq	fp, r0, #23040	; 0x5a00
  5c:	4a060204 	bmi	180874 <main-0x7e7f78c>
  60:	01040200 	mrseq	r0, R12_usr
  64:	0259064a 	subseq	r0, r9, #77594624	; 0x4a00000
  68:	01010001 	tsteq	r1, r1

Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	676e6f6c 	strbvs	r6, [lr, -ip, ror #30]!
   4:	6e6f6c20 	cdpvs	12, 6, cr6, cr15, cr0, {1}
   8:	6e692067 	cdpvs	0, 6, cr2, cr9, cr7, {3}
   c:	5f520074 	svcpl	0x00520074
  10:	5f52444f 	svcpl	0x0052444f
  14:	616d0074 	smcvs	53252	; 0xd004
  18:	632e6e69 	teqvs	lr, #1680	; 0x690
  1c:	69616d00 	stmdbvs	r1!, {r8, sl, fp, sp, lr}^
  20:	4e47006e 	cdpmi	0, 4, cr0, cr7, cr14, {3}
  24:	20432055 	subcs	r2, r3, r5, asr r0
  28:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  2c:	6f6c0032 	svcvs	0x006c0032
  30:	6c20676e 	stcvs	7, cr6, [r0], #-440	; 0xfffffe48
  34:	20676e6f 	rsbcs	r6, r7, pc, ror #28
  38:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  3c:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
  40:	746e6920 	strbtvc	r6, [lr], #-2336	; 0x920
  44:	69757600 	ldmdbvs	r5!, {r9, sl, ip, sp, lr}^
  48:	3233746e 	eorscc	r7, r3, #1845493760	; 0x6e000000
  4c:	4700745f 	smlsdmi	r0, pc, r4, r7	; <UNPREDICTABLE>
  50:	654c5c3a 	strbvs	r5, [ip, #-3130]	; 0xc3a
  54:	206e7261 	rsbcs	r7, lr, r1, ror #4
  58:	64206e69 	strtvs	r6, [r0], #-3689	; 0xe69
  5c:	68747065 	ldmdavs	r4!, {r0, r2, r5, r6, ip, sp, lr}^
  60:	7069445c 	rsbvc	r4, r9, ip, asr r4
  64:	616d6f6c 	cmnvs	sp, ip, ror #30
  68:	646f6320 	strbtvs	r6, [pc], #-800	; 70 <main-0x7ffff90>
  6c:	4c5c7365 	mrrcmi	3, 6, r7, ip, cr5
  70:	6e726165 	rpwvssz	f6, f2, f5
  74:	5f6e495f 	svcpl	0x006e495f
  78:	74706544 	ldrbtvc	r6, [r0], #-1348	; 0x544
  7c:	69445f68 	stmdbvs	r4, {r3, r5, r6, r8, r9, sl, fp, ip, lr}^
  80:	6d6f6c70 	stclvs	12, cr6, [pc, #-448]!	; fffffec8 <_STACK_TOP+0xdfffeec4>
  84:	6e555c61 	cdpvs	12, 5, cr5, cr5, cr1, {3}
  88:	335f7469 	cmpcc	pc, #1761607680	; 0x69000000
  8c:	626d455f 	rsbvs	r4, sp, #398458880	; 0x17c00000
  90:	65646465 	strbvs	r6, [r4, #-1125]!	; 0x465
  94:	5c435f64 	mcrrpl	15, 6, r5, r3, cr4
  98:	3462616c 	strbtcc	r6, [r2], #-364	; 0x16c
  9c:	6d72415f 	ldfvse	f4, [r2, #-380]!	; 0xfffffe84
  a0:	726f635f 	rsbvc	r6, pc, #2080374785	; 0x7c000001
  a4:	5f786574 	svcpl	0x00786574
  a8:	735f336d 	cmpvc	pc, #-1275068415	; 0xb4000001
  ac:	74726174 	ldrbtvc	r6, [r2], #-372	; 0x174
  b0:	732e7075 	teqvc	lr, #117	; 0x75
  b4:	315f7000 	cmpcc	pc, r0
  b8:	6c410033 	mcrrvs	0, 3, r0, r1, cr3
  bc:	69465f6c 	stmdbvs	r6, {r2, r3, r5, r6, r8, r9, sl, fp, ip, lr}^
  c0:	73646c65 	cmnvc	r4, #25856	; 0x6500
  c4:	736e7500 	cmnvc	lr, #0, 10
  c8:	656e6769 	strbvs	r6, [lr, #-1897]!	; 0x769
  cc:	68632064 	stmdavs	r3!, {r2, r5, r6, sp}^
  d0:	64007261 	strvs	r7, [r0], #-609	; 0x261
  d4:	6c62756f 	cfstr64vs	mvdx7, [r2], #-444	; 0xfffffe44
  d8:	5f520065 	svcpl	0x00520065
  dc:	0052444f 	subseq	r4, r2, pc, asr #8
  e0:	6f6f425f 	svcvs	0x006f425f
  e4:	6873006c 	ldmdavs	r3!, {r2, r3, r5, r6}^
  e8:	2074726f 	rsbscs	r7, r4, pc, ror #4
  ec:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  f0:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
  f4:	746e6920 	strbtvc	r6, [lr], #-2336	; 0x920
  f8:	6f6c6600 	svcvs	0x006c6600
  fc:	73007461 	movwvc	r7, #1121	; 0x461
 100:	74726f68 	ldrbtvc	r6, [r2], #-3944	; 0xf68
 104:	746e6920 	strbtvc	r6, [lr], #-2336	; 0x920
 108:	73657200 	cmnvc	r5, #0, 4
 10c:	65767265 	ldrbvs	r7, [r6, #-613]!	; 0x265
 110:	Address 0x00000110 is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <main-0x6f2f2dc>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	34202955 	strtcc	r2, [r0], #-2389	; 0x955
   c:	322e372e 	eorcc	r3, lr, #12058624	; 0xb80000
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003241 	andeq	r3, r0, r1, asr #4
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000028 	andeq	r0, r0, r8, lsr #32
  10:	726f4305 	rsbvc	r4, pc, #335544320	; 0x14000000
  14:	2d786574 	cfldr64cs	mvdx6, [r8, #-464]!	; 0xfffffe30
  18:	0600334d 	streq	r3, [r0], -sp, asr #6
  1c:	094d070a 	stmdbeq	sp, {r1, r3, r8, r9, sl}^
  20:	14041202 	strne	r1, [r4], #-514	; 0x202
  24:	17011501 	strne	r1, [r1, -r1, lsl #10]
  28:	19011803 	stmdbne	r1, {r0, r1, fp, ip}
  2c:	1e011a01 	vmlane.f32	s2, s2, s2
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
  14:	00000000 	andeq	r0, r0, r0
  18:	08000000 	stmdaeq	r0, {}	; <UNPREDICTABLE>
  1c:	000000e4 	andeq	r0, r0, r4, ror #1
  20:	87040e41 	strhi	r0, [r4, -r1, asr #28]
  24:	100e4101 	andne	r4, lr, r1, lsl #2
  28:	00070d41 	andeq	r0, r7, r1, asr #26
