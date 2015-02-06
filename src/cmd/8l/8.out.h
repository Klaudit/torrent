// Inferno utils/8c/8.out.h
// http://code.google.com/p/inferno-os/source/browse/utils/8c/8.out.h
//
//	Copyright © 1994-1999 Lucent Technologies Inc.  All rights reserved.
//	Portions Copyright © 1995-1997 C H Forsyth (forsyth@terzarima.net)
//	Portions Copyright © 1997-1999 Vita Nuova Limited
//	Portions Copyright © 2000-2007 Vita Nuova Holdings Limited (www.vitanuova.com)
//	Portions Copyright © 2004,2006 Bruce Ellis
//	Portions Copyright © 2005-2007 C H Forsyth (forsyth@terzarima.net)
//	Revisions Copyright © 2000-2007 Lucent Technologies Inc. and others
//	Portions Copyright © 2009 The Go Authors.  All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#define	NSYM	50
#define	NSNAME	8
#include "../ld/textflag.h"

enum
{
	AAAA = A_ARCHSPECIFIC,
	AAAD,
	AAAM,
	AAAS,
	AADCB,
	AADCL,
	AADCW,
	AADDB,
	AADDL,
	AADDW,
	AADJSP,
	AANDB,
	AANDL,
	AANDW,
	AARPL,
	ABOUNDL,
	ABOUNDW,
	ABSFL,
	ABSFW,
	ABSRL,
	ABSRW,
	ABTL,
	ABTW,
	ABTCL,
	ABTCW,
	ABTRL,
	ABTRW,
	ABTSL,
	ABTSW,
	ABYTE,
	ACLC,
	ACLD,
	ACLI,
	ACLTS,
	ACMC,
	ACMPB,
	ACMPL,
	ACMPW,
	ACMPSB,
	ACMPSL,
	ACMPSW,
	ADAA,
	ADAS,
	ADECB,
	ADECL,
	ADECW,
	ADIVB,
	ADIVL,
	ADIVW,
	AENTER,
	AHLT,
	AIDIVB,
	AIDIVL,
	AIDIVW,
	AIMULB,
	AIMULL,
	AIMULW,
	AINB,
	AINL,
	AINW,
	AINCB,
	AINCL,
	AINCW,
	AINSB,
	AINSL,
	AINSW,
	AINT,
	AINTO,
	AIRETL,
	AIRETW,
	AJCC,
	AJCS,
	AJCXZL,
	AJCXZW,
	AJEQ,
	AJGE,
	AJGT,
	AJHI,
	AJLE,
	AJLS,
	AJLT,
	AJMI,
	AJNE,
	AJOC,
	AJOS,
	AJPC,
	AJPL,
	AJPS,
	ALAHF,
	ALARL,
	ALARW,
	ALEAL,
	ALEAW,
	ALEAVEL,
	ALEAVEW,
	ALOCK,
	ALODSB,
	ALODSL,
	ALODSW,
	ALONG,
	ALOOP,
	ALOOPEQ,
	ALOOPNE,
	ALSLL,
	ALSLW,
	AMOVB,
	AMOVL,
	AMOVW,
	AMOVQ,
	AMOVBLSX,
	AMOVBLZX,
	AMOVBWSX,
	AMOVBWZX,
	AMOVWLSX,
	AMOVWLZX,
	AMOVSB,
	AMOVSL,
	AMOVSW,
	AMULB,
	AMULL,
	AMULW,
	ANEGB,
	ANEGL,
	ANEGW,
	ANOTB,
	ANOTL,
	ANOTW,
	AORB,
	AORL,
	AORW,
	AOUTB,
	AOUTL,
	AOUTW,
	AOUTSB,
	AOUTSL,
	AOUTSW,
	APAUSE,
	APOPAL,
	APOPAW,
	APOPFL,
	APOPFW,
	APOPL,
	APOPW,
	APUSHAL,
	APUSHAW,
	APUSHFL,
	APUSHFW,
	APUSHL,
	APUSHW,
	ARCLB,
	ARCLL,
	ARCLW,
	ARCRB,
	ARCRL,
	ARCRW,
	AREP,
	AREPN,
	AROLB,
	AROLL,
	AROLW,
	ARORB,
	ARORL,
	ARORW,
	ASAHF,
	ASALB,
	ASALL,
	ASALW,
	ASARB,
	ASARL,
	ASARW,
	ASBBB,
	ASBBL,
	ASBBW,
	ASCASB,
	ASCASL,
	ASCASW,
	ASETCC,
	ASETCS,
	ASETEQ,
	ASETGE,
	ASETGT,
	ASETHI,
	ASETLE,
	ASETLS,
	ASETLT,
	ASETMI,
	ASETNE,
	ASETOC,
	ASETOS,
	ASETPC,
	ASETPL,
	ASETPS,
	ACDQ,
	ACWD,
	ASHLB,
	ASHLL,
	ASHLW,
	ASHRB,
	ASHRL,
	ASHRW,
	ASTC,
	ASTD,
	ASTI,
	ASTOSB,
	ASTOSL,
	ASTOSW,
	ASUBB,
	ASUBL,
	ASUBW,
	ASYSCALL,
	ATESTB,
	ATESTL,
	ATESTW,
	AVERR,
	AVERW,
	AWAIT,
	AWORD,
	AXCHGB,
	AXCHGL,
	AXCHGW,
	AXLAT,
	AXORB,
	AXORL,
	AXORW,

	AFMOVB,
	AFMOVBP,
	AFMOVD,
	AFMOVDP,
	AFMOVF,
	AFMOVFP,
	AFMOVL,
	AFMOVLP,
	AFMOVV,
	AFMOVVP,
	AFMOVW,
	AFMOVWP,
	AFMOVX,
	AFMOVXP,

	AFCOMB,
	AFCOMBP,
	AFCOMD,
	AFCOMDP,
	AFCOMDPP,
	AFCOMF,
	AFCOMFP,
	AFCOMI,
	AFCOMIP,
	AFCOML,
	AFCOMLP,
	AFCOMW,
	AFCOMWP,
	AFUCOM,
	AFUCOMI,
	AFUCOMIP,
	AFUCOMP,
	AFUCOMPP,

	AFADDDP,
	AFADDW,
	AFADDL,
	AFADDF,
	AFADDD,

	AFMULDP,
	AFMULW,
	AFMULL,
	AFMULF,
	AFMULD,

	AFSUBDP,
	AFSUBW,
	AFSUBL,
	AFSUBF,
	AFSUBD,

	AFSUBRDP,
	AFSUBRW,
	AFSUBRL,
	AFSUBRF,
	AFSUBRD,

	AFDIVDP,
	AFDIVW,
	AFDIVL,
	AFDIVF,
	AFDIVD,

	AFDIVRDP,
	AFDIVRW,
	AFDIVRL,
	AFDIVRF,
	AFDIVRD,

	AFXCHD,
	AFFREE,

	AFLDCW,
	AFLDENV,
	AFRSTOR,
	AFSAVE,
	AFSTCW,
	AFSTENV,
	AFSTSW,

	AF2XM1,
	AFABS,
	AFCHS,
	AFCLEX,
	AFCOS,
	AFDECSTP,
	AFINCSTP,
	AFINIT,
	AFLD1,
	AFLDL2E,
	AFLDL2T,
	AFLDLG2,
	AFLDLN2,
	AFLDPI,
	AFLDZ,
	AFNOP,
	AFPATAN,
	AFPREM,
	AFPREM1,
	AFPTAN,
	AFRNDINT,
	AFSCALE,
	AFSIN,
	AFSINCOS,
	AFSQRT,
	AFTST,
	AFXAM,
	AFXTRACT,
	AFYL2X,
	AFYL2XP1,




	ACMPXCHGB,
	ACMPXCHGL,
	ACMPXCHGW,
	ACMPXCHG8B,

	ACPUID,
	ARDTSC,

	AXADDB,
	AXADDL,
	AXADDW,

	/* conditional move */
	ACMOVLCC,
	ACMOVLCS,
	ACMOVLEQ,
	ACMOVLGE,
	ACMOVLGT,
	ACMOVLHI,
	ACMOVLLE,
	ACMOVLLS,
	ACMOVLLT,
	ACMOVLMI,
	ACMOVLNE,
	ACMOVLOC,
	ACMOVLOS,
	ACMOVLPC,
	ACMOVLPL,
	ACMOVLPS,
	ACMOVWCC,
	ACMOVWCS,
	ACMOVWEQ,
	ACMOVWGE,
	ACMOVWGT,
	ACMOVWHI,
	ACMOVWLE,
	ACMOVWLS,
	ACMOVWLT,
	ACMOVWMI,
	ACMOVWNE,
	ACMOVWOC,
	ACMOVWOS,
	ACMOVWPC,
	ACMOVWPL,
	ACMOVWPS,

	AFCMOVCC,
	AFCMOVCS,
	AFCMOVEQ,
	AFCMOVHI,
	AFCMOVLS,
	AFCMOVNE,
	AFCMOVNU,
	AFCMOVUN,

	ALFENCE,
	AMFENCE,
	ASFENCE,

	AEMMS,
	
	APREFETCHT0,
	APREFETCHT1,
	APREFETCHT2,
	APREFETCHNTA,
	
	ABSWAPL,
	

	// SSE2
	AADDPD,
	AADDPS,
	AADDSD,
	AADDSS,
	AANDNPD,
	AANDNPS,
	AANDPD,
	AANDPS,
	ACMPPD,
	ACMPPS,
	ACMPSD,
	ACMPSS,
	ACOMISD,
	ACOMISS,
	ACVTPL2PD,
	ACVTPL2PS,
	ACVTPD2PL,
	ACVTPD2PS,
	ACVTPS2PL,
	ACVTPS2PD,
	ACVTSD2SL,
	ACVTSD2SS,
	ACVTSL2SD,
	ACVTSL2SS,
	ACVTSS2SD,
	ACVTSS2SL,
	ACVTTPD2PL,
	ACVTTPS2PL,
	ACVTTSD2SL,
	ACVTTSS2SL,
	ADIVPD,
	ADIVPS,
	ADIVSD,
	ADIVSS,
	AMASKMOVOU,
	AMAXPD,
	AMAXPS,
	AMAXSD,
	AMAXSS,
	AMINPD,
	AMINPS,
	AMINSD,
	AMINSS,
	AMOVAPD,
	AMOVAPS,
	AMOVO,
	AMOVOU,
	AMOVHLPS,
	AMOVHPD,
	AMOVHPS,
	AMOVLHPS,
	AMOVLPD,
	AMOVLPS,
	AMOVMSKPD,
	AMOVMSKPS,
	AMOVNTO,
	AMOVNTPD,
	AMOVNTPS,
	AMOVSD,
	AMOVSS,
	AMOVUPD,
	AMOVUPS,
	AMULPD,
	AMULPS,
	AMULSD,
	AMULSS,
	AORPD,
	AORPS,
	APADDQ,
	APAND,
	APCMPEQB,
	APMAXSW,
	APMAXUB,
	APMINSW,
	APMINUB,
	APMOVMSKB,
	APSADBW,
	APSUBB,
	APSUBL,
	APSUBQ,
	APSUBSB,
	APSUBSW,
	APSUBUSB,
	APSUBUSW,
	APSUBW,
	APUNPCKHQDQ,
	APUNPCKLQDQ,
	APXOR,
	ARCPPS,
	ARCPSS,
	ARSQRTPS,
	ARSQRTSS,
	ASQRTPD,
	ASQRTPS,
	ASQRTSD,
	ASQRTSS,
	ASUBPD,
	ASUBPS,
	ASUBSD,
	ASUBSS,
	AUCOMISD,
	AUCOMISS,
	AUNPCKHPD,
	AUNPCKHPS,
	AUNPCKLPD,
	AUNPCKLPS,
	AXORPD,
	AXORPS,
	APSHUFHW,
	APSHUFL,
	APSHUFLW,

	/* SSE 3+ */
	AAESENC,
	APINSRD,
	APSHUFB,

	
	ALAST
};

enum
{
	REG_NONE	= 0,

	REG_AL		= 0+16,
	REG_CL,
	REG_DL,
	REG_BL,

	REG_AH		= 4+16,
	REG_CH,
	REG_DH,
	REG_BH,

	REG_AX		= 8+16,
	REG_CX,
	REG_DX,
	REG_BX,
	REG_SP,
	REG_BP,
	REG_SI,
	REG_DI,

	REG_F0		= 16+16,
	REG_F7		= REG_F0 + 7+16,

	REG_CS		= 24+16,
	REG_SS,
	REG_DS,
	REG_ES,
	REG_FS,
	REG_GS,

	REG_GDTR,		/* global descriptor table register */
	REG_IDTR,		/* interrupt descriptor table register */
	REG_LDTR,		/* local descriptor table register */
	REG_MSW,		/* machine status word */
	REG_TASK,		/* task register */

	REG_CR		= 35+16,
	REG_DR		= 43+16,
	REG_TR		= 51+16,

	REG_X0		= 59+16,
	REG_X1,
	REG_X2,
	REG_X3,
	REG_X4,
	REG_X5,
	REG_X6,
	REG_X7,
	
	REG_TLS		= 67+16,
	MAXREG		= 68+16,

	T_TYPE		= 1<<0,
	T_INDEX		= 1<<1,
	T_OFFSET	= 1<<2,
	T_FCONST	= 1<<3,
	T_SYM		= 1<<4,
	T_SCONST	= 1<<5,
	T_OFFSET2	= 1<<6,
	T_GOTYPE	= 1<<7,

	REGARG		= -1,
	REGRET		= REG_AX,
	FREGRET		= REG_F0,
	REGSP		= REG_SP,
	REGTMP		= REG_DI,
};

/*
 * this is the ranlib header
 */
#define	SYMDEF	"__.GOSYMDEF"