/***********************************************************************/
/*                                                                     */
/*  FILE        :vect.h                                                */
/*  DATE        :Wed, Apr 22, 2009                                     */
/*  DESCRIPTION :Definition of Vector                                  */
/*  CPU TYPE    :SH7619                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  




//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
extern void PowerON_Reset_PC(void);                                                                                                                

//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP

// 2 Reserved

// 3 Reserved

// 4 Illegal code
#pragma interrupt INT_Illegal_code
extern void INT_Illegal_code(void);

// 5 Reserved

// 6 Illegal slot
#pragma interrupt INT_Illegal_slot
extern void INT_Illegal_slot(void);

// 7 Reserved

// 8 Reserved

// 9 CPU Address error
#pragma interrupt INT_CPU_Address
extern void INT_CPU_Address(void);

// 10 Reserved

// 11 NMI
#pragma interrupt INT_NMI
extern void INT_NMI(void);

// 12 User breakpoint trap
#pragma interrupt INT_User_Break
extern void INT_User_Break(void);

// 13 H-UDI
#pragma interrupt INT_H_UDI
extern void INT_H_UDI(void);

// 14 Reserved

// 15 Reserved

// 16 Reserved

// 17 Reserved

// 18 Reserved

// 19 Reserved

// 20 Reserved

// 21 Reserved

// 22 Reserved

// 23 Reserved

// 24 Reserved

// 25 Reserved

// 26 Reserved

// 27 Reserved

// 28 Reserved

// 29 Reserved

// 30 Reserved

// 31 Reserved

// 32 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA32
extern void INT_TRAPA32(void);

// 33 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA33
extern void INT_TRAPA33(void);

// 34 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA34
extern void INT_TRAPA34(void);

// 35 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA35
extern void INT_TRAPA35(void);

// 36 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA36
extern void INT_TRAPA36(void);

// 37 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA37
extern void INT_TRAPA37(void);

// 38 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA38
extern void INT_TRAPA38(void);

// 39 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA39
extern void INT_TRAPA39(void);

// 40 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA40
extern void INT_TRAPA40(void);

// 41 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA41
extern void INT_TRAPA41(void);

// 42 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA42
extern void INT_TRAPA42(void);

// 43 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA43
extern void INT_TRAPA43(void);

// 44 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA44
extern void INT_TRAPA44(void);

// 45 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA45
extern void INT_TRAPA45(void);

// 46 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA46
extern void INT_TRAPA46(void);

// 47 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA47
extern void INT_TRAPA47(void);

// 48 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA48
extern void INT_TRAPA48(void);

// 49 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA49
extern void INT_TRAPA49(void);

// 50 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA50
extern void INT_TRAPA50(void);

// 51 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA51
extern void INT_TRAPA51(void);

// 52 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA52
extern void INT_TRAPA52(void);

// 53 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA53
extern void INT_TRAPA53(void);

// 54 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA54
extern void INT_TRAPA54(void);

// 55 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA55
extern void INT_TRAPA55(void);

// 56 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA56
extern void INT_TRAPA56(void);

// 57 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA57
extern void INT_TRAPA57(void);

// 58 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA58
extern void INT_TRAPA58(void);

// 59 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA59
extern void INT_TRAPA59(void);

// 60 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA60
extern void INT_TRAPA60(void);

// 61 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA61
extern void INT_TRAPA61(void);

// 62 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA62
extern void INT_TRAPA62(void);

// 63 TRAPA (User Vecter)
#pragma interrupt INT_TRAPA63
extern void INT_TRAPA63(void);

// 64 Interrupt IRQ0
#pragma interrupt INT_IRQ0
extern void INT_IRQ0(void);

// 65 Interrupt IRQ1
#pragma interrupt INT_IRQ1
extern void INT_IRQ1(void);

// 66 Interrupt IRQ2
#pragma interrupt INT_IRQ2
extern void INT_IRQ2(void);

// 67 Interrupt IRQ3
#pragma interrupt INT_IRQ3
extern void INT_IRQ3(void);

// 68 Reserved

// 69 Reserved

// 70 Reserved

// 71 Reserved

// 72 Reserved

// 73 Reserved

// 74 Reserved

// 75 Reserved

// 76 Reserved

// 77 Reserved

// 78 Reserved

// 79 Reserved

// 80 Interrupt IRQ4
#pragma interrupt INT_IRQ4
extern void INT_IRQ4(void);

// 81 Interrupt IRQ5
#pragma interrupt INT_IRQ5
extern void INT_IRQ5(void);

// 82 Interrupt IRQ6
#pragma interrupt INT_IRQ6
extern void INT_IRQ6(void);

// 83 Interrupt IRQ7
#pragma interrupt INT_IRQ7
extern void INT_IRQ7(void);

// 84 WDT ITI
#pragma interrupt INT_WDT_ITI
extern void INT_WDT_ITI(void);

// 85 EDMAC EINT0
#pragma interrupt INT_EDMAC_EINT0
extern void INT_EDMAC_EINT0(void);

// 86 CMT0 CMI_0
#pragma interrupt INT_CMT0_CMI_0
extern void INT_CMT0_CMI_0(void);

// 87 CMT1 CMI_1
#pragma interrupt INT_CMT1_CMI_1
extern void INT_CMT1_CMI_1(void);

// 88 SCIF ERI_0 
#pragma interrupt INT_SCIF_ERI_0
extern void INT_SCIF_ERI_0(void);

// 89 SCIF RXI_0 
#pragma interrupt INT_SCIF_RXI_0
extern void INT_SCIF_RXI_0(void);

// 90 SCIF BRI_0 
#pragma interrupt INT_SCIF_BRI_0
extern void INT_SCIF_BRI_0(void);

// 91 SCIF TXI_0 
#pragma interrupt INT_SCIF_TXI_0
extern void INT_SCIF_TXI_0(void);

// 92 SCIF ERI_1 
#pragma interrupt INT_SCIF_ERI_1
extern void INT_SCIF_ERI_1(void);

// 93 SCIF RXI_1 
#pragma interrupt INT_SCIF_RXI_1
extern void INT_SCIF_RXI_1(void);

// 94 SCIF BRI_1 
#pragma interrupt INT_SCIF_BRI_1
extern void INT_SCIF_BRI_1(void);

// 95 SCIF TXI_1 
#pragma interrupt INT_SCIF_TXI_1
extern void INT_SCIF_TXI_1(void);

// 96 SCIF ERI_2 
#pragma interrupt INT_SCIF_ERI_2
extern void INT_SCIF_ERI_2(void);

// 97 SCIF RXI_2 
#pragma interrupt INT_SCIF_RXI_2
extern void INT_SCIF_RXI_2(void);

// 98 SCIF BRI_2 
#pragma interrupt INT_SCIF_BRI_2
extern void INT_SCIF_BRI_2(void);

// 99 SCIF TXI_2 
#pragma interrupt INT_SCIF_TXI_2
extern void INT_SCIF_TXI_2(void);

// 100 HIF HIFI 
#pragma interrupt INT_HIF_HIFI
extern void INT_HIF_HIFI(void);

// 101 HIF HIFBI 
#pragma interrupt INT_HIF_HIFBI
extern void INT_HIF_HIFBI(void);

// 102 Reserved

// 103 Reserved

// 104 DMAC DEI0
#pragma interrupt INT_DMAC_DEI0
extern void INT_DMAC_DEI0(void);

// 105 DMAC DEI1
#pragma interrupt INT_DMAC_DEI1
extern void INT_DMAC_DEI1(void);

// 106 DMAC DEI2
#pragma interrupt INT_DMAC_DEI2
extern void INT_DMAC_DEI2(void);

// 107 DMAC DEI3
#pragma interrupt INT_DMAC_DEI3
extern void INT_DMAC_DEI3(void);

// 108 SIOF SIOF1
#pragma interrupt INT_SIOF_SIOF1
extern void INT_SIOF_SIOF1(void);

// 109 Reserved

// 110 Reserved

// 111 Reserved

// 112 Reserved

// 113 Reserved

// 114 Reserved

// 115 Reserved

// 116 Reserved

// 117 Reserved

// 118 Reserved

// 119 Reserved

// 120 Reserved

// 121 Reserved

// 122 Reserved

// 123 Reserved

// 124 Reserved

// 125 Reserved

// 126 Reserved

// 127 Reserved

// 128 Reserved

// 129 Reserved

// 130 Reserved

// 131 Reserved

// 132 Reserved

// 133 Reserved

// 134 Reserved

// 135 Reserved

// 136 Reserved

// 137 Reserved

// 138 Reserved

// 139 Reserved

// 140 Reserved

// 141 Reserved

// 142 Reserved

// 143 Reserved

// 144 Reserved

// 145 Reserved

// 146 Reserved

// 147 Reserved

// 148 Reserved

// 149 Reserved

// 150 Reserved

// 151 Reserved

// 152 Reserved

// 153 Reserved

// 154 Reserved

// 155 Reserved

// 156 Reserved

// 157 Reserved

// 158 Reserved

// 159 Reserved

// 160 Reserved

// 161 Reserved

// 162 Reserved

// 163 Reserved

// 164 Reserved

// 165 Reserved

// 166 Reserved

// 167 Reserved

// 168 Reserved

// 169 Reserved

// 170 Reserved

// 171 Reserved

// 172 Reserved

// 173 Reserved

// 174 Reserved

// 175 Reserved

// 176 Reserved

// 177 Reserved

// 178 Reserved

// 179 Reserved

// 180 Reserved

// 181 Reserved

// 182 Reserved

// 183 Reserved

// 184 Reserved

// 185 Reserved

// 186 Reserved

// 187 Reserved

// 188 Reserved

// 189 Reserved

// 190 Reserved

// 191 Reserved

// 192 Reserved

// 193 Reserved

// 194 Reserved

// 195 Reserved

// 196 Reserved

// 197 Reserved

// 198 Reserved

// 199 Reserved

// 200 Reserved

// 201 Reserved

// 202 Reserved

// 203 Reserved

// 204 Reserved

// 205 Reserved

// 206 Reserved

// 207 Reserved

// 208 Reserved

// 209 Reserved

// 210 Reserved

// 211 Reserved

// 212 Reserved

// 213 Reserved

// 214 Reserved

// 215 Reserved

// 216 Reserved

// 217 Reserved

// 218 Reserved

// 219 Reserved

// 220 Reserved

// 221 Reserved

// 222 Reserved

// 223 Reserved

// 224 Reserved

// 225 Reserved

// 226 Reserved

// 227 Reserved

// 228 Reserved

// 229 Reserved

// 230 Reserved

// 231 Reserved

// 232 Reserved

// 233 Reserved

// 234 Reserved

// 235 Reserved

// 236 Reserved

// 237 Reserved

// 238 Reserved

// 239 Reserved

// 240 Reserved

// 241 Reserved

// 242 Reserved

// 243 Reserved

// 244 Reserved

// 245 Reserved

// 246 Reserved

// 247 Reserved

// 248 Reserved

// 249 Reserved

// 250 Reserved

// 251 Reserved

// 252 Reserved

// 253 Reserved

// 254 Reserved

// 255 Reserved

// Dummy
#pragma interrupt Dummy
extern void Dummy(void);