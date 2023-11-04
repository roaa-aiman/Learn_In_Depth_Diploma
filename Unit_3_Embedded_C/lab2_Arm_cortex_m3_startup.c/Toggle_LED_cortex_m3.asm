
Toggle_LED_cortex_m3.elf:     file format elf32-littlearm


Disassembly of section .text:

08000000 <vectors>:
 8000000:	20001004 	andcs	r1, r0, r4
 8000004:	0800010d 	stmdaeq	r0, {r0, r2, r3, r8}
 8000008:	08000101 	stmdaeq	r0, {r0, r8}
 800000c:	08000101 	stmdaeq	r0, {r0, r8}
 8000010:	08000101 	stmdaeq	r0, {r0, r8}
 8000014:	08000101 	stmdaeq	r0, {r0, r8}
 8000018:	08000101 	stmdaeq	r0, {r0, r8}

0800001c <main>:
 800001c:	b480      	push	{r7}
 800001e:	b083      	sub	sp, #12
 8000020:	af00      	add	r7, sp, #0
 8000022:	f241 0318 	movw	r3, #4120	; 0x1018
 8000026:	f2c4 0302 	movt	r3, #16386	; 0x4002
 800002a:	f241 0218 	movw	r2, #4120	; 0x1018
 800002e:	f2c4 0202 	movt	r2, #16386	; 0x4002
 8000032:	6812      	ldr	r2, [r2, #0]
 8000034:	f042 0204 	orr.w	r2, r2, #4
 8000038:	601a      	str	r2, [r3, #0]
 800003a:	f640 0304 	movw	r3, #2052	; 0x804
 800003e:	f2c4 0301 	movt	r3, #16385	; 0x4001
 8000042:	f640 0204 	movw	r2, #2052	; 0x804
 8000046:	f2c4 0201 	movt	r2, #16385	; 0x4001
 800004a:	6812      	ldr	r2, [r2, #0]
 800004c:	f422 1280 	bic.w	r2, r2, #1048576	; 0x100000
 8000050:	601a      	str	r2, [r3, #0]
 8000052:	f640 0304 	movw	r3, #2052	; 0x804
 8000056:	f2c4 0301 	movt	r3, #16385	; 0x4001
 800005a:	f640 0204 	movw	r2, #2052	; 0x804
 800005e:	f2c4 0201 	movt	r2, #16385	; 0x4001
 8000062:	6812      	ldr	r2, [r2, #0]
 8000064:	f442 1200 	orr.w	r2, r2, #2097152	; 0x200000
 8000068:	601a      	str	r2, [r3, #0]
 800006a:	f640 0304 	movw	r3, #2052	; 0x804
 800006e:	f2c4 0301 	movt	r3, #16385	; 0x4001
 8000072:	f640 0204 	movw	r2, #2052	; 0x804
 8000076:	f2c4 0201 	movt	r2, #16385	; 0x4001
 800007a:	6812      	ldr	r2, [r2, #0]
 800007c:	f422 0280 	bic.w	r2, r2, #4194304	; 0x400000
 8000080:	601a      	str	r2, [r3, #0]
 8000082:	f640 0304 	movw	r3, #2052	; 0x804
 8000086:	f2c4 0301 	movt	r3, #16385	; 0x4001
 800008a:	f640 0204 	movw	r2, #2052	; 0x804
 800008e:	f2c4 0201 	movt	r2, #16385	; 0x4001
 8000092:	6812      	ldr	r2, [r2, #0]
 8000094:	f422 0200 	bic.w	r2, r2, #8388608	; 0x800000
 8000098:	601a      	str	r2, [r3, #0]
 800009a:	f640 030c 	movw	r3, #2060	; 0x80c
 800009e:	f2c4 0301 	movt	r3, #16385	; 0x4001
 80000a2:	f640 020c 	movw	r2, #2060	; 0x80c
 80000a6:	f2c4 0201 	movt	r2, #16385	; 0x4001
 80000aa:	6812      	ldr	r2, [r2, #0]
 80000ac:	f442 5200 	orr.w	r2, r2, #8192	; 0x2000
 80000b0:	601a      	str	r2, [r3, #0]
 80000b2:	f04f 0300 	mov.w	r3, #0
 80000b6:	607b      	str	r3, [r7, #4]
 80000b8:	e003      	b.n	80000c2 <main+0xa6>
 80000ba:	687b      	ldr	r3, [r7, #4]
 80000bc:	f103 0301 	add.w	r3, r3, #1
 80000c0:	607b      	str	r3, [r7, #4]
 80000c2:	687a      	ldr	r2, [r7, #4]
 80000c4:	f240 13f3 	movw	r3, #499	; 0x1f3
 80000c8:	429a      	cmp	r2, r3
 80000ca:	ddf6      	ble.n	80000ba <main+0x9e>
 80000cc:	f640 030c 	movw	r3, #2060	; 0x80c
 80000d0:	f2c4 0301 	movt	r3, #16385	; 0x4001
 80000d4:	f640 020c 	movw	r2, #2060	; 0x80c
 80000d8:	f2c4 0201 	movt	r2, #16385	; 0x4001
 80000dc:	6812      	ldr	r2, [r2, #0]
 80000de:	f422 5200 	bic.w	r2, r2, #8192	; 0x2000
 80000e2:	601a      	str	r2, [r3, #0]
 80000e4:	f04f 0300 	mov.w	r3, #0
 80000e8:	603b      	str	r3, [r7, #0]
 80000ea:	e003      	b.n	80000f4 <main+0xd8>
 80000ec:	683b      	ldr	r3, [r7, #0]
 80000ee:	f103 0301 	add.w	r3, r3, #1
 80000f2:	603b      	str	r3, [r7, #0]
 80000f4:	683a      	ldr	r2, [r7, #0]
 80000f6:	f240 13f3 	movw	r3, #499	; 0x1f3
 80000fa:	429a      	cmp	r2, r3
 80000fc:	ddf6      	ble.n	80000ec <main+0xd0>
 80000fe:	e7cc      	b.n	800009a <main+0x7e>

08000100 <Default_Hundler>:
 8000100:	b580      	push	{r7, lr}
 8000102:	af00      	add	r7, sp, #0
 8000104:	f000 f802 	bl	800010c <Reset_Hundler>
 8000108:	bd80      	pop	{r7, pc}
 800010a:	bf00      	nop

0800010c <Reset_Hundler>:
 800010c:	b580      	push	{r7, lr}
 800010e:	b086      	sub	sp, #24
 8000110:	af00      	add	r7, sp, #0
 8000112:	f240 0204 	movw	r2, #4
 8000116:	f2c2 0200 	movt	r2, #8192	; 0x2000
 800011a:	f240 0300 	movw	r3, #0
 800011e:	f2c2 0300 	movt	r3, #8192	; 0x2000
 8000122:	1ad3      	subs	r3, r2, r3
 8000124:	607b      	str	r3, [r7, #4]
 8000126:	f240 13bc 	movw	r3, #444	; 0x1bc
 800012a:	f6c0 0300 	movt	r3, #2048	; 0x800
 800012e:	617b      	str	r3, [r7, #20]
 8000130:	f240 0300 	movw	r3, #0
 8000134:	f2c2 0300 	movt	r3, #8192	; 0x2000
 8000138:	613b      	str	r3, [r7, #16]
 800013a:	f04f 0300 	mov.w	r3, #0
 800013e:	60fb      	str	r3, [r7, #12]
 8000140:	e00f      	b.n	8000162 <Reset_Hundler+0x56>
 8000142:	697b      	ldr	r3, [r7, #20]
 8000144:	781a      	ldrb	r2, [r3, #0]
 8000146:	693b      	ldr	r3, [r7, #16]
 8000148:	701a      	strb	r2, [r3, #0]
 800014a:	693b      	ldr	r3, [r7, #16]
 800014c:	f103 0301 	add.w	r3, r3, #1
 8000150:	613b      	str	r3, [r7, #16]
 8000152:	697b      	ldr	r3, [r7, #20]
 8000154:	f103 0301 	add.w	r3, r3, #1
 8000158:	617b      	str	r3, [r7, #20]
 800015a:	68fb      	ldr	r3, [r7, #12]
 800015c:	f103 0301 	add.w	r3, r3, #1
 8000160:	60fb      	str	r3, [r7, #12]
 8000162:	68fa      	ldr	r2, [r7, #12]
 8000164:	687b      	ldr	r3, [r7, #4]
 8000166:	429a      	cmp	r2, r3
 8000168:	d3eb      	bcc.n	8000142 <Reset_Hundler+0x36>
 800016a:	f240 0204 	movw	r2, #4
 800016e:	f2c2 0200 	movt	r2, #8192	; 0x2000
 8000172:	f240 0304 	movw	r3, #4
 8000176:	f2c2 0300 	movt	r3, #8192	; 0x2000
 800017a:	1ad3      	subs	r3, r2, r3
 800017c:	603b      	str	r3, [r7, #0]
 800017e:	f240 0304 	movw	r3, #4
 8000182:	f2c2 0300 	movt	r3, #8192	; 0x2000
 8000186:	613b      	str	r3, [r7, #16]
 8000188:	f04f 0300 	mov.w	r3, #0
 800018c:	60bb      	str	r3, [r7, #8]
 800018e:	e00b      	b.n	80001a8 <Reset_Hundler+0x9c>
 8000190:	693b      	ldr	r3, [r7, #16]
 8000192:	f04f 0200 	mov.w	r2, #0
 8000196:	701a      	strb	r2, [r3, #0]
 8000198:	693b      	ldr	r3, [r7, #16]
 800019a:	f103 0301 	add.w	r3, r3, #1
 800019e:	613b      	str	r3, [r7, #16]
 80001a0:	68bb      	ldr	r3, [r7, #8]
 80001a2:	f103 0301 	add.w	r3, r3, #1
 80001a6:	60bb      	str	r3, [r7, #8]
 80001a8:	68ba      	ldr	r2, [r7, #8]
 80001aa:	683b      	ldr	r3, [r7, #0]
 80001ac:	429a      	cmp	r2, r3
 80001ae:	d3ef      	bcc.n	8000190 <Reset_Hundler+0x84>
 80001b0:	f7ff ff34 	bl	800001c <main>
 80001b4:	f107 0718 	add.w	r7, r7, #24
 80001b8:	46bd      	mov	sp, r7
 80001ba:	bd80      	pop	{r7, pc}

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
   c:	00000083 	andeq	r0, r0, r3, lsl #1
  10:	00007401 	andeq	r7, r0, r1, lsl #8
  14:	00000e00 	andeq	r0, r0, r0, lsl #28
  18:	00001c00 	andeq	r1, r0, r0, lsl #24
  1c:	00010008 	andeq	r0, r1, r8
  20:	00000008 	andeq	r0, r0, r8
  24:	02010200 	andeq	r0, r1, #0, 4
  28:	000000db 	ldrdeq	r0, [r0], -fp
  2c:	c9080102 	stmdbgt	r8, {r1, r8}
  30:	02000000 	andeq	r0, r0, #0
  34:	00c20601 	sbceq	r0, r2, r1, lsl #12
  38:	02020000 	andeq	r0, r2, #0
  3c:	0000ff05 	andeq	pc, r0, r5, lsl #30
  40:	05040300 	streq	r0, [r4, #-768]	; 0x300
  44:	00746e69 	rsbseq	r6, r4, r9, ror #28
  48:	00050802 	andeq	r0, r5, r2, lsl #16
  4c:	02000000 	andeq	r0, r0, #0
  50:	00c00801 	sbceq	r0, r0, r1, lsl #16
  54:	02020000 	andeq	r0, r2, #0
  58:	0000e107 	andeq	lr, r0, r7, lsl #2
  5c:	07040200 	streq	r0, [r4, -r0, lsl #4]
  60:	00000099 	muleq	r0, r9, r0
  64:	8f070802 	svchi	0x00070802
  68:	04000000 	streq	r0, [r0], #-0
  6c:	000000a6 	andeq	r0, r0, r6, lsr #1
  70:	00762902 	rsbseq	r2, r6, r2, lsl #18
  74:	5d050000 	stcpl	0, cr0, [r5, #-0]
  78:	02000000 	andeq	r0, r0, #0
  7c:	00f90404 	rscseq	r0, r9, r4, lsl #8
  80:	08020000 	stmdaeq	r2, {}	; <UNPREDICTABLE>
  84:	0000ce04 	andeq	ip, r0, r4, lsl #28
  88:	01040600 	tsteq	r4, r0, lsl #12
  8c:	0000b423 	andeq	fp, r0, r3, lsr #8
  90:	01090700 	tsteq	r9, r0, lsl #14
  94:	25010000 	strcs	r0, [r1, #-0]
  98:	0000006b 	andeq	r0, r0, fp, rrx
  9c:	02130d04 	andseq	r0, r3, #4, 26	; 0x100
  a0:	b0070023 	andlt	r0, r7, r3, lsr #32
  a4:	01000000 	mrseq	r0, (UNDEF: 0)
  a8:	00006b26 	andeq	r6, r0, r6, lsr #22
  ac:	12010400 	andne	r0, r1, #0, 8
  b0:	00002302 	andeq	r2, r0, r2, lsl #6
  b4:	20010408 	andcs	r0, r1, r8, lsl #8
  b8:	000000d3 	ldrdeq	r0, [r0], -r3
  bc:	0000b509 	andeq	fp, r0, r9, lsl #10
  c0:	6b220100 	blvs	8804c8 <vectors-0x777fb38>
  c4:	0a000000 	beq	cc <vectors-0x7ffff34>
  c8:	006e6970 	rsbeq	r6, lr, r0, ror r9
  cc:	00892701 	addeq	r2, r9, r1, lsl #14
  d0:	04000000 	streq	r0, [r0], #-0
  d4:	0000007b 	andeq	r0, r0, fp, ror r0
  d8:	00b42801 	adcseq	r2, r4, r1, lsl #16
  dc:	010b0000 	mrseq	r0, (UNDEF: 11)
  e0:	000000f4 	strdeq	r0, [r0], -r4
  e4:	41012c01 	tstmi	r1, r1, lsl #24
  e8:	1c000000 	stcne	0, cr0, [r0], {-0}
  ec:	00080000 	andeq	r0, r8, r0
  f0:	00080001 	andeq	r0, r8, r1
  f4:	01000000 	mrseq	r0, (UNDEF: 0)
  f8:	0000012d 	andeq	r0, r0, sp, lsr #2
  fc:	0000b20c 	andeq	fp, r0, ip, lsl #4
 100:	0000cc08 	andeq	ip, r0, r8, lsl #24
 104:	00011608 	andeq	r1, r1, r8, lsl #12
 108:	00690d00 	rsbeq	r0, r9, r0, lsl #26
 10c:	00413901 	subeq	r3, r1, r1, lsl #18
 110:	91020000 	mrsls	r0, (UNDEF: 2)
 114:	e40e0074 	str	r0, [lr], #-116	; 0x74
 118:	fe080000 	cdp2	0, 0, cr0, cr8, cr0, {0}
 11c:	0d080000 	stceq	0, cr0, [r8, #-0]
 120:	3d010069 	stccc	0, cr0, [r1, #-420]	; 0xfffffe5c
 124:	00000041 	andeq	r0, r0, r1, asr #32
 128:	00709102 	rsbseq	r9, r0, r2, lsl #2
 12c:	00d50f00 	sbcseq	r0, r5, r0, lsl #30
 130:	2a010000 	bcs	40138 <vectors-0x7fbfec8>
 134:	0000013f 	andeq	r0, r0, pc, lsr r1
 138:	00030501 	andeq	r0, r3, r1, lsl #10
 13c:	10200000 	eorne	r0, r0, r0
 140:	00014504 	andeq	r4, r1, r4, lsl #10
 144:	00d30500 	sbcseq	r0, r3, r0, lsl #10
 148:	a1000000 	mrsge	r0, (UNDEF: 0)
 14c:	02000001 	andeq	r0, r0, #1
 150:	0000e000 	andeq	lr, r0, r0
 154:	83010400 	movwhi	r0, #5120	; 0x1400
 158:	01000000 	mrseq	r0, (UNDEF: 0)
 15c:	0000006a 	andeq	r0, r0, sl, rrx
 160:	0000000e 	andeq	r0, r0, lr
 164:	08000100 	stmdaeq	r0, {r8}
 168:	080001bc 	stmdaeq	r0, {r2, r3, r4, r5, r7, r8}
 16c:	0000006c 	andeq	r0, r0, ip, rrx
 170:	db020102 	blle	80580 <vectors-0x7f7fa80>
 174:	02000000 	andeq	r0, r0, #0
 178:	00c90801 	sbceq	r0, r9, r1, lsl #16
 17c:	01020000 	mrseq	r0, (UNDEF: 2)
 180:	0000c206 	andeq	ip, r0, r6, lsl #4
 184:	05020200 	streq	r0, [r2, #-512]	; 0x200
 188:	000000ff 	strdeq	r0, [r0], -pc	; <UNPREDICTABLE>
 18c:	69050403 	stmdbvs	r5, {r0, r1, sl}
 190:	0200746e 	andeq	r7, r0, #1845493760	; 0x6e000000
 194:	00000508 	andeq	r0, r0, r8, lsl #10
 198:	62040000 	andvs	r0, r4, #0
 19c:	02000001 	andeq	r0, r0, #1
 1a0:	00005a1a 	andeq	r5, r0, sl, lsl sl
 1a4:	08010200 	stmdaeq	r1, {r9}
 1a8:	000000c0 	andeq	r0, r0, r0, asr #1
 1ac:	e1070202 	tst	r7, r2, lsl #4
 1b0:	04000000 	streq	r0, [r0], #-0
 1b4:	000000a7 	andeq	r0, r0, r7, lsr #1
 1b8:	00731c02 	rsbseq	r1, r3, r2, lsl #24
 1bc:	04020000 	streq	r0, [r2], #-0
 1c0:	00009907 	andeq	r9, r0, r7, lsl #18
 1c4:	07080200 	streq	r0, [r8, -r0, lsl #4]
 1c8:	0000008f 	andeq	r0, r0, pc, lsl #1
 1cc:	f9040402 			; <UNDEFINED> instruction: 0xf9040402
 1d0:	02000000 	andeq	r0, r0, #0
 1d4:	00ce0408 	sbceq	r0, lr, r8, lsl #8
 1d8:	01050000 	mrseq	r0, (UNDEF: 5)
 1dc:	00000112 	andeq	r0, r0, r2, lsl r1
 1e0:	01000e01 	tsteq	r0, r1, lsl #28
 1e4:	010a0800 	tsteq	sl, r0, lsl #16
 1e8:	00380800 	eorseq	r0, r8, r0, lsl #16
 1ec:	06010000 	streq	r0, [r1], -r0
 1f0:	00013a01 	andeq	r3, r1, r1, lsl #20
 1f4:	01290100 	teqeq	r9, r0, lsl #2
 1f8:	0800010c 	stmdaeq	r0, {r2, r3, r8}
 1fc:	080001bc 	stmdaeq	r0, {r2, r3, r4, r5, r7, r8}
 200:	00000064 	andeq	r0, r0, r4, rrx
 204:	00012701 	andeq	r2, r1, r1, lsl #14
 208:	01220700 	teqeq	r2, r0, lsl #14
 20c:	2c010000 	stccs	0, cr0, [r1], {-0}
 210:	00000068 	andeq	r0, r0, r8, rrx
 214:	07649102 	strbeq	r9, [r4, -r2, lsl #2]!
 218:	0000012c 	andeq	r0, r0, ip, lsr #2
 21c:	01272d01 	teqeq	r7, r1, lsl #26
 220:	91020000 	mrsls	r0, (UNDEF: 2)
 224:	01830774 	orreq	r0, r3, r4, ror r7
 228:	2e010000 	cdpcs	0, 0, cr0, cr1, cr0, {0}
 22c:	00000127 	andeq	r0, r0, r7, lsr #2
 230:	07709102 	ldrbeq	r9, [r0, -r2, lsl #2]!
 234:	00000190 	muleq	r0, r0, r1
 238:	00683601 	rsbeq	r3, r8, r1, lsl #12
 23c:	91020000 	mrsls	r0, (UNDEF: 2)
 240:	013a0860 	teqeq	sl, r0, ror #16
 244:	016a0800 	cmneq	sl, r0, lsl #16
 248:	01100800 	tsteq	r0, r0, lsl #16
 24c:	69090000 	stmdbvs	r9, {}	; <UNPREDICTABLE>
 250:	41300100 	teqmi	r0, r0, lsl #2
 254:	02000000 	andeq	r0, r0, #0
 258:	0a006c91 	beq	1b4a4 <vectors-0x7fe4b5c>
 25c:	08000188 	stmdaeq	r0, {r3, r7, r8}
 260:	080001b0 	stmdaeq	r0, {r4, r5, r7, r8}
 264:	01006909 	tsteq	r0, r9, lsl #18
 268:	00004139 	andeq	r4, r0, r9, lsr r1
 26c:	68910200 	ldmvs	r1, {r9}
 270:	040b0000 	streq	r0, [fp], #-0
 274:	0000004f 	andeq	r0, r0, pc, asr #32
 278:	00014f0c 	andeq	r4, r1, ip, lsl #30
 27c:	68080100 	stmdavs	r8, {r8}
 280:	01000000 	mrseq	r0, (UNDEF: 0)
 284:	00680d01 	rsbeq	r0, r8, r1, lsl #26
 288:	014a0000 	mrseq	r0, (UNDEF: 74)
 28c:	4a0e0000 	bmi	380294 <vectors-0x7c7fd6c>
 290:	06000001 	streq	r0, [r0], -r1
 294:	07040200 	streq	r0, [r4, -r0, lsl #4]
 298:	00000172 	andeq	r0, r0, r2, ror r1
 29c:	0001320f 	andeq	r3, r1, pc, lsl #4
 2a0:	3a190100 	bcc	6406a8 <vectors-0x79bf958>
 2a4:	01000001 	tsteq	r0, r1
 2a8:	00000305 	andeq	r0, r0, r5, lsl #6
 2ac:	5a0c0800 	bpl	3022b4 <vectors-0x7cfdd4c>
 2b0:	01000001 	tsteq	r0, r1
 2b4:	00006823 	andeq	r6, r0, r3, lsr #16
 2b8:	0c010100 	stfeqs	f0, [r1], {-0}
 2bc:	0000017b 	andeq	r0, r0, fp, ror r1
 2c0:	00682401 	rsbeq	r2, r8, r1, lsl #8
 2c4:	01010000 	mrseq	r0, (UNDEF: 1)
 2c8:	00016a0c 	andeq	r6, r1, ip, lsl #20
 2cc:	68250100 	stmdavs	r5!, {r8}
 2d0:	01000000 	mrseq	r0, (UNDEF: 0)
 2d4:	01890c01 	orreq	r0, r9, r1, lsl #24
 2d8:	26010000 	strcs	r0, [r1], -r0
 2dc:	00000068 	andeq	r0, r0, r8, rrx
 2e0:	480c0101 	stmdami	ip, {r0, r8}
 2e4:	01000001 	tsteq	r0, r1
 2e8:	00006827 	andeq	r6, r0, r7, lsr #16
 2ec:	00010100 	andeq	r0, r1, r0, lsl #2

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0b0b0024 	bleq	2c00ac <vectors-0x7d3ff54>
  18:	0e030b3e 	vmoveq.16	d3[0], r0
  1c:	24030000 	strcs	r0, [r3], #-0
  20:	3e0b0b00 	vmlacc.f64	d0, d11, d0
  24:	0008030b 	andeq	r0, r8, fp, lsl #6
  28:	00160400 	andseq	r0, r6, r0, lsl #8
  2c:	0b3a0e03 	bleq	e83840 <vectors-0x717c7c0>
  30:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  34:	35050000 	strcc	r0, [r5, #-0]
  38:	00134900 	andseq	r4, r3, r0, lsl #18
  3c:	01130600 	tsteq	r3, r0, lsl #12
  40:	0b3a0b0b 	bleq	e82c74 <vectors-0x717d38c>
  44:	13010b3b 	movwne	r0, #6971	; 0x1b3b
  48:	0d070000 	stceq	0, cr0, [r7, #-0]
  4c:	3a0e0300 	bcc	380c54 <vectors-0x7c7f3ac>
  50:	490b3b0b 	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  54:	0d0b0b13 	vstreq	d0, [fp, #-76]	; 0xffffffb4
  58:	380b0c0b 	stmdacc	fp, {r0, r1, r3, sl, fp}
  5c:	0800000a 	stmdaeq	r0, {r1, r3}
  60:	0b0b0117 	bleq	2c04c4 <vectors-0x7d3fb3c>
  64:	0b3b0b3a 	bleq	ec2d54 <vectors-0x713d2ac>
  68:	00001301 	andeq	r1, r0, r1, lsl #6
  6c:	03000d09 	movweq	r0, #3337	; 0xd09
  70:	3b0b3a0e 	blcc	2ce8b0 <vectors-0x7d31750>
  74:	0013490b 	andseq	r4, r3, fp, lsl #18
  78:	000d0a00 	andeq	r0, sp, r0, lsl #20
  7c:	0b3a0803 	bleq	e82090 <vectors-0x717df70>
  80:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  84:	2e0b0000 	cdpcs	0, 0, cr0, cr11, cr0, {0}
  88:	030c3f01 	movweq	r3, #52993	; 0xcf01
  8c:	3b0b3a0e 	blcc	2ce8cc <vectors-0x7d31734>
  90:	490c270b 	stmdbmi	ip, {r0, r1, r3, r8, r9, sl, sp}
  94:	12011113 	andne	r1, r1, #-1073741820	; 0xc0000004
  98:	97064001 	strls	r4, [r6, -r1]
  9c:	13010c42 	movwne	r0, #7234	; 0x1c42
  a0:	0b0c0000 	bleq	3000a8 <vectors-0x7cfff58>
  a4:	12011101 	andne	r1, r1, #1073741824	; 0x40000000
  a8:	00130101 	andseq	r0, r3, r1, lsl #2
  ac:	00340d00 	eorseq	r0, r4, r0, lsl #26
  b0:	0b3a0803 	bleq	e820c4 <vectors-0x717df3c>
  b4:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  b8:	00000a02 	andeq	r0, r0, r2, lsl #20
  bc:	11010b0e 	tstne	r1, lr, lsl #22
  c0:	00011201 	andeq	r1, r1, r1, lsl #4
  c4:	00340f00 	eorseq	r0, r4, r0, lsl #30
  c8:	0b3a0e03 	bleq	e838dc <vectors-0x717c724>
  cc:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  d0:	0a020c3f 	beq	831d4 <vectors-0x7f7ce2c>
  d4:	0f100000 	svceq	0x00100000
  d8:	490b0b00 	stmdbmi	fp, {r8, r9, fp}
  dc:	00000013 	andeq	r0, r0, r3, lsl r0
  e0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
  e4:	030b130e 	movweq	r1, #45838	; 0xb30e
  e8:	110e1b0e 	tstne	lr, lr, lsl #22
  ec:	10011201 	andne	r1, r1, r1, lsl #4
  f0:	02000006 	andeq	r0, r0, #6
  f4:	0b0b0024 	bleq	2c018c <vectors-0x7d3fe74>
  f8:	0e030b3e 	vmoveq.16	d3[0], r0
  fc:	24030000 	strcs	r0, [r3], #-0
 100:	3e0b0b00 	vmlacc.f64	d0, d11, d0
 104:	0008030b 	andeq	r0, r8, fp, lsl #6
 108:	00160400 	andseq	r0, r6, r0, lsl #8
 10c:	0b3a0e03 	bleq	e83920 <vectors-0x717c6e0>
 110:	13490b3b 	movtne	r0, #39739	; 0x9b3b
 114:	2e050000 	cdpcs	0, 0, cr0, cr5, cr0, {0}
 118:	030c3f00 	movweq	r3, #52992	; 0xcf00
 11c:	3b0b3a0e 	blcc	2ce95c <vectors-0x7d316a4>
 120:	1201110b 	andne	r1, r1, #-1073741822	; 0xc0000002
 124:	96064001 	strls	r4, [r6], -r1
 128:	00000c42 	andeq	r0, r0, r2, asr #24
 12c:	3f012e06 	svccc	0x00012e06
 130:	3a0e030c 	bcc	380d68 <vectors-0x7c7f298>
 134:	270b3b0b 	strcs	r3, [fp, -fp, lsl #22]
 138:	1201110c 	andne	r1, r1, #12, 2
 13c:	96064001 	strls	r4, [r6], -r1
 140:	13010c42 	movwne	r0, #7234	; 0x1c42
 144:	34070000 	strcc	r0, [r7], #-0
 148:	3a0e0300 	bcc	380d50 <vectors-0x7c7f2b0>
 14c:	490b3b0b 	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
 150:	000a0213 	andeq	r0, sl, r3, lsl r2
 154:	010b0800 	tsteq	fp, r0, lsl #16
 158:	01120111 	tsteq	r2, r1, lsl r1
 15c:	00001301 	andeq	r1, r0, r1, lsl #6
 160:	03003409 	movweq	r3, #1033	; 0x409
 164:	3b0b3a08 	blcc	2ce98c <vectors-0x7d31674>
 168:	0213490b 	andseq	r4, r3, #180224	; 0x2c000
 16c:	0a00000a 	beq	19c <vectors-0x7fffe64>
 170:	0111010b 	tsteq	r1, fp, lsl #2
 174:	00000112 	andeq	r0, r0, r2, lsl r1
 178:	0b000f0b 	bleq	3dac <vectors-0x7ffc254>
 17c:	0013490b 	andseq	r4, r3, fp, lsl #18
 180:	00340c00 	eorseq	r0, r4, r0, lsl #24
 184:	0b3a0e03 	bleq	e83998 <vectors-0x717c668>
 188:	13490b3b 	movtne	r0, #39739	; 0x9b3b
 18c:	0c3c0c3f 	ldceq	12, cr0, [ip], #-252	; 0xffffff04
 190:	010d0000 	mrseq	r0, (UNDEF: 13)
 194:	01134901 	tsteq	r3, r1, lsl #18
 198:	0e000013 	mcreq	0, 0, r0, cr0, cr3, {0}
 19c:	13490021 	movtne	r0, #36897	; 0x9021
 1a0:	00000b2f 	andeq	r0, r0, pc, lsr #22
 1a4:	0300340f 	movweq	r3, #1039	; 0x40f
 1a8:	3b0b3a0e 	blcc	2ce9e8 <vectors-0x7d31618>
 1ac:	3f13490b 	svccc	0x0013490b
 1b0:	000a020c 	andeq	r0, sl, ip, lsl #4
	...

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
  3c:	00000002 	andeq	r0, r0, r2
  40:	007d0002 	rsbseq	r0, sp, r2
  44:	00000002 	andeq	r0, r0, r2
  48:	00000004 	andeq	r0, r0, r4
  4c:	087d0002 	ldmdaeq	sp!, {r1}^
  50:	00000004 	andeq	r0, r0, r4
  54:	0000000a 	andeq	r0, r0, sl
  58:	08770002 	ldmdaeq	r7!, {r1}^
	...
  64:	0000000c 	andeq	r0, r0, ip
  68:	0000000e 	andeq	r0, r0, lr
  6c:	007d0002 	rsbseq	r0, sp, r2
  70:	0000000e 	andeq	r0, r0, lr
  74:	00000010 	andeq	r0, r0, r0, lsl r0
  78:	087d0002 	ldmdaeq	sp!, {r1}^
  7c:	00000010 	andeq	r0, r0, r0, lsl r0
  80:	00000012 	andeq	r0, r0, r2, lsl r0
  84:	207d0002 	rsbscs	r0, sp, r2
  88:	00000012 	andeq	r0, r0, r2, lsl r0
  8c:	000000bc 	strheq	r0, [r0], -ip
  90:	20770002 	rsbscs	r0, r7, r2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
   c:	00000000 	andeq	r0, r0, r0
  10:	0800001c 	stmdaeq	r0, {r2, r3, r4}
  14:	000000e4 	andeq	r0, r0, r4, ror #1
	...
  20:	0000001c 	andeq	r0, r0, ip, lsl r0
  24:	014b0002 	cmpeq	fp, r2
  28:	00040000 	andeq	r0, r4, r0
  2c:	00000000 	andeq	r0, r0, r0
  30:	08000100 	stmdaeq	r0, {r8}
  34:	000000bc 	strheq	r0, [r0], -ip
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
  2c:	545f6d72 	ldrbpl	r6, [pc], #-3442	; 34 <vectors-0x7ffffcc>
  30:	73657079 	cmnvc	r5, #121	; 0x79
  34:	0000682e 	andeq	r6, r0, lr, lsr #16
  38:	00000000 	andeq	r0, r0, r0
  3c:	001c0205 	andseq	r0, ip, r5, lsl #4
  40:	2c030800 	stccs	8, cr0, [r3], {-0}
  44:	bbbb3d01 	bllt	feecf450 <_STACK_TOP+0xdeece44c>
  48:	bcbfbbbb 	fldmiaxlt	pc!, {d11-d103}	;@ Deprecated
  4c:	02040200 	andeq	r0, r4, #0, 4
  50:	02004a06 	andeq	r4, r0, #24576	; 0x6000
  54:	064a0104 	strbeq	r0, [sl], -r4, lsl #2
  58:	0200bc5a 	andeq	fp, r0, #23040	; 0x5a00
  5c:	4a060204 	bmi	180874 <vectors-0x7e7f78c>
  60:	01040200 	mrseq	r0, R12_usr
  64:	0259064a 	subseq	r0, r9, #77594624	; 0x4a00000
  68:	01010001 	tsteq	r1, r1
  6c:	00000079 	andeq	r0, r0, r9, ror r0
  70:	00340002 	eorseq	r0, r4, r2
  74:	01020000 	mrseq	r0, (UNDEF: 2)
  78:	000d0efb 	strdeq	r0, [sp], -fp
  7c:	01010101 	tsteq	r1, r1, lsl #2
  80:	01000000 	mrseq	r0, (UNDEF: 0)
  84:	00010000 	andeq	r0, r1, r0
  88:	72617473 	rsbvc	r7, r1, #1929379840	; 0x73000000
  8c:	2e707574 	mrccs	5, 3, r7, cr0, cr4, {3}
  90:	00000063 	andeq	r0, r0, r3, rrx
  94:	616c5000 	cmnvs	ip, r0
  98:	726f6674 	rsbvc	r6, pc, #116, 12	; 0x7400000
  9c:	79545f6d 	ldmdbvc	r4, {r0, r2, r3, r5, r6, r8, r9, sl, fp, ip, lr}^
  a0:	2e736570 	mrccs	5, 3, r6, cr3, cr0, {3}
  a4:	00000068 	andeq	r0, r0, r8, rrx
  a8:	05000000 	streq	r0, [r0, #-0]
  ac:	00010002 	andeq	r0, r1, r2
  b0:	010e0308 	tsteq	lr, r8, lsl #6
  b4:	19032f2f 	stmdbne	r3, {r0, r1, r2, r3, r5, r8, r9, sl, fp, sp}
  b8:	599f3e2e 	ldmibpl	pc, {r1, r2, r3, r5, r9, sl, fp, ip, sp}	; <UNPREDICTABLE>
  bc:	0402005a 	streq	r0, [r2], #-90	; 0x5a
  c0:	02004c02 	andeq	r4, r0, #512	; 0x200
  c4:	00b80204 	adcseq	r0, r8, r4, lsl #4
  c8:	06010402 	streq	r0, [r1], -r2, lsl #8
  cc:	9f50064a 	svcls	0x0050064a
  d0:	0402005a 	streq	r0, [r2], #-90	; 0x5a
  d4:	02004c02 	andeq	r4, r0, #512	; 0x200
  d8:	00800204 	addeq	r0, r0, r4, lsl #4
  dc:	06010402 	streq	r0, [r1], -r2, lsl #8
  e0:	2f50064a 	svccs	0x0050064a
  e4:	01000402 	tsteq	r0, r2, lsl #8
  e8:	Address 0x000000e8 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	676e6f6c 	strbvs	r6, [lr, -ip, ror #30]!
   4:	6e6f6c20 	cdpvs	12, 6, cr6, cr15, cr0, {1}
   8:	6e692067 	cdpvs	0, 6, cr2, cr9, cr7, {3}
   c:	3a470074 	bcc	11c01e4 <vectors-0x6e3fe1c>
  10:	61654c5c 	cmnvs	r5, ip, asr ip
  14:	69206e72 	stmdbvs	r0!, {r1, r4, r5, r6, r9, sl, fp, sp, lr}
  18:	6564206e 	strbvs	r2, [r4, #-110]!	; 0x6e
  1c:	5c687470 	cfstrdpl	mvd7, [r8], #-448	; 0xfffffe40
  20:	6c706944 	ldclvs	9, cr6, [r0], #-272	; 0xfffffef0
  24:	20616d6f 	rsbcs	r6, r1, pc, ror #26
  28:	65646f63 	strbvs	r6, [r4, #-3939]!	; 0xf63
  2c:	654c5c73 	strbvs	r5, [ip, #-3187]	; 0xc73
  30:	5f6e7261 	svcpl	0x006e7261
  34:	445f6e49 	ldrbmi	r6, [pc], #-3657	; 3c <vectors-0x7ffffc4>
  38:	68747065 	ldmdavs	r4!, {r0, r2, r5, r6, ip, sp, lr}^
  3c:	7069445f 	rsbvc	r4, r9, pc, asr r4
  40:	616d6f6c 	cmnvs	sp, ip, ror #30
  44:	696e555c 	stmdbvs	lr!, {r2, r3, r4, r6, r8, sl, ip, lr}^
  48:	5f335f74 	svcpl	0x00335f74
  4c:	65626d45 	strbvs	r6, [r2, #-3397]!	; 0xd45
  50:	64656464 	strbtvs	r6, [r5], #-1124	; 0x464
  54:	6c5c435f 	mrrcvs	3, 5, r4, ip, cr15
  58:	5f346261 	svcpl	0x00346261
  5c:	5f6d7241 	svcpl	0x006d7241
  60:	74726f63 	ldrbtvc	r6, [r2], #-3939	; 0xf63
  64:	6d5f7865 	ldclvs	8, cr7, [pc, #-404]	; fffffed8 <_STACK_TOP+0xdfffeed4>
  68:	74735f33 	ldrbtvc	r5, [r3], #-3891	; 0xf33
  6c:	75747261 	ldrbvc	r7, [r4, #-609]!	; 0x261
  70:	00632e70 	rsbeq	r2, r3, r0, ror lr
  74:	6e69616d 	powvsez	f6, f1, #5.0
  78:	5200632e 	andpl	r6, r0, #-1207959552	; 0xb8000000
  7c:	52444f5f 	subpl	r4, r4, #380	; 0x17c
  80:	4700745f 	smlsdmi	r0, pc, r4, r7	; <UNPREDICTABLE>
  84:	4320554e 	teqmi	r0, #327155712	; 0x13800000
  88:	372e3420 	strcc	r3, [lr, -r0, lsr #8]!
  8c:	6c00322e 	sfmvs	f3, 4, [r0], {46}	; 0x2e
  90:	20676e6f 	rsbcs	r6, r7, pc, ror #28
  94:	676e6f6c 	strbvs	r6, [lr, -ip, ror #30]!
  98:	736e7520 	cmnvc	lr, #32, 10	; 0x8000000
  9c:	656e6769 	strbvs	r6, [lr, #-1897]!	; 0x769
  a0:	6e692064 	cdpvs	0, 6, cr2, cr9, cr4, {3}
  a4:	75760074 	ldrbvc	r0, [r6, #-116]!	; 0x74
  a8:	33746e69 	cmncc	r4, #1680	; 0x690
  ac:	00745f32 	rsbseq	r5, r4, r2, lsr pc
  b0:	33315f70 	teqcc	r1, #112, 30	; 0x1c0
  b4:	6c6c4100 	stfvse	f4, [ip], #-0
  b8:	6569465f 	strbvs	r4, [r9, #-1631]!	; 0x65f
  bc:	0073646c 	rsbseq	r6, r3, ip, ror #8
  c0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
  c4:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
  c8:	61686320 	cmnvs	r8, r0, lsr #6
  cc:	6f640072 	svcvs	0x00640072
  d0:	656c6275 	strbvs	r6, [ip, #-629]!	; 0x275
  d4:	4f5f5200 	svcmi	0x005f5200
  d8:	5f005244 	svcpl	0x00005244
  dc:	6c6f6f42 	stclvs	15, cr6, [pc], #-264	; ffffffdc <_STACK_TOP+0xdfffefd8>
  e0:	6f687300 	svcvs	0x00687300
  e4:	75207472 	strvc	r7, [r0, #-1138]!	; 0x472
  e8:	6769736e 	strbvs	r7, [r9, -lr, ror #6]!
  ec:	2064656e 	rsbcs	r6, r4, lr, ror #10
  f0:	00746e69 	rsbseq	r6, r4, r9, ror #28
  f4:	6e69616d 	powvsez	f6, f1, #5.0
  f8:	6f6c6600 	svcvs	0x006c6600
  fc:	73007461 	movwvc	r7, #1121	; 0x461
 100:	74726f68 	ldrbtvc	r6, [r2], #-3944	; 0xf68
 104:	746e6920 	strbtvc	r6, [lr], #-2336	; 0x920
 108:	73657200 	cmnvc	r5, #0, 4
 10c:	65767265 	ldrbvs	r7, [r6, #-613]!	; 0x265
 110:	65440064 	strbvs	r0, [r4, #-100]	; 0x64
 114:	6c756166 	ldfvse	f6, [r5], #-408	; 0xfffffe68
 118:	75485f74 	strbvc	r5, [r8, #-3956]	; 0xf74
 11c:	656c646e 	strbvs	r6, [ip, #-1134]!	; 0x46e
 120:	41440072 	hvcmi	16386	; 0x4002
 124:	535f4154 	cmppl	pc, #84, 2
 128:	00657a69 	rsbeq	r7, r5, r9, ror #20
 12c:	72735f50 	rsbsvc	r5, r3, #80, 30	; 0x140
 130:	65760063 	ldrbvs	r0, [r6, #-99]!	; 0x63
 134:	726f7463 	rsbvc	r7, pc, #1660944384	; 0x63000000
 138:	65520073 	ldrbvs	r0, [r2, #-115]	; 0x73
 13c:	5f746573 	svcpl	0x00746573
 140:	646e7548 	strbtvs	r7, [lr], #-1352	; 0x548
 144:	0072656c 	rsbseq	r6, r2, ip, ror #10
 148:	425f455f 	subsmi	r4, pc, #398458880	; 0x17c00000
 14c:	5f005353 	svcpl	0x00005353
 150:	43415453 	movtmi	r5, #5203	; 0x1453
 154:	4f545f4b 	svcmi	0x00545f4b
 158:	455f0050 	ldrbmi	r0, [pc, #-80]	; 110 <vectors-0x7fffef0>
 15c:	5845545f 	stmdapl	r5, {r0, r1, r2, r3, r4, r6, sl, ip, lr}^
 160:	69750054 	ldmdbvs	r5!, {r2, r4, r6}^
 164:	5f38746e 	svcpl	0x0038746e
 168:	455f0074 	ldrbmi	r0, [pc, #-116]	; fc <vectors-0x7ffff04>
 16c:	5441445f 	strbpl	r4, [r1], #-1119	; 0x45f
 170:	69730041 	ldmdbvs	r3!, {r0, r6}^
 174:	7974657a 	ldmdbvc	r4!, {r1, r3, r4, r5, r6, r8, sl, sp, lr}^
 178:	5f006570 	svcpl	0x00006570
 17c:	41445f53 	cmpmi	r4, r3, asr pc
 180:	50004154 	andpl	r4, r0, r4, asr r1
 184:	7473645f 	ldrbtvc	r6, [r3], #-1119	; 0x45f
 188:	5f535f00 	svcpl	0x00535f00
 18c:	00535342 	subseq	r5, r3, r2, asr #6
 190:	5f535342 	svcpl	0x00535342
 194:	657a6953 	ldrbvs	r6, [sl, #-2387]!	; 0x953
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <vectors-0x6f2f2dc>
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
  18:	0800001c 	stmdaeq	r0, {r2, r3, r4}
  1c:	000000e4 	andeq	r0, r0, r4, ror #1
  20:	87040e41 	strhi	r0, [r4, -r1, asr #28]
  24:	100e4101 	andne	r4, lr, r1, lsl #2
  28:	00070d41 	andeq	r0, r7, r1, asr #26
  2c:	0000000c 	andeq	r0, r0, ip
  30:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
  34:	7c020001 	stcvc	0, cr0, [r2], {1}
  38:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  3c:	00000018 	andeq	r0, r0, r8, lsl r0
  40:	0000002c 	andeq	r0, r0, ip, lsr #32
  44:	08000100 	stmdaeq	r0, {r8}
  48:	0000000a 	andeq	r0, r0, sl
  4c:	87080e41 	strhi	r0, [r8, -r1, asr #28]
  50:	41018e02 	tstmi	r1, r2, lsl #28
  54:	0000070d 	andeq	r0, r0, sp, lsl #14
  58:	0000001c 	andeq	r0, r0, ip, lsl r0
  5c:	0000002c 	andeq	r0, r0, ip, lsr #32
  60:	0800010c 	stmdaeq	r0, {r2, r3, r8}
  64:	000000b0 	strheq	r0, [r0], -r0	; <UNPREDICTABLE>
  68:	87080e41 	strhi	r0, [r8, -r1, asr #28]
  6c:	41018e02 	tstmi	r1, r2, lsl #28
  70:	0d41200e 	stcleq	0, cr2, [r1, #-56]	; 0xffffffc8
  74:	00000007 	andeq	r0, r0, r7
