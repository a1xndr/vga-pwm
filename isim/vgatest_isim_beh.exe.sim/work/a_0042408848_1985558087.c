/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/alxndr/Develpoment/FPGA/vga_test/vga.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_970019341842429312_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_970019341842501186_3965413181(char *, char *, char *, int );


static void work_a_0042408848_1985558087_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6440U);
    t4 = ieee_p_3620187407_sub_970019341842429312_3965413181(IEEE_P_3620187407, t3, t2, 100);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB3:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6440U);
    t13 = ieee_p_3620187407_sub_970019341842501186_3965413181(IEEE_P_3620187407, t3, t2, 100);
    if (t13 == 1)
        goto LAB17;

LAB18:    t7 = (unsigned char)0;

LAB19:    if (t7 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6440U);
    t13 = ieee_p_3620187407_sub_970019341842501186_3965413181(IEEE_P_3620187407, t3, t2, 200);
    if (t13 == 1)
        goto LAB29;

LAB30:    t7 = (unsigned char)0;

LAB31:    if (t7 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 == 1)
        goto LAB23;

LAB24:    t1 = (unsigned char)0;

LAB25:    if (t1 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB21:    t2 = (t0 + 4104);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(119, ng0);
    t8 = (t0 + 4184);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 6440U);
    t7 = ieee_p_3620187407_sub_970019341842429312_3965413181(IEEE_P_3620187407, t6, t5, 100);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(125, ng0);
    t12 = (t0 + 4248);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB11:    t10 = (t0 + 2152U);
    t11 = *((char **)t10);
    t10 = (t0 + 6440U);
    t16 = ieee_p_3620187407_sub_970019341842429312_3965413181(IEEE_P_3620187407, t11, t10, 200);
    t1 = t16;
    goto LAB13;

LAB14:    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t8 = (t0 + 6440U);
    t15 = ieee_p_3620187407_sub_970019341842429312_3965413181(IEEE_P_3620187407, t9, t8, 200);
    t4 = t15;
    goto LAB16;

LAB17:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 6440U);
    t14 = ieee_p_3620187407_sub_970019341842501186_3965413181(IEEE_P_3620187407, t6, t5, 100);
    t7 = t14;
    goto LAB19;

LAB20:    xsi_set_current_line(131, ng0);
    t12 = (t0 + 4312);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t12);
    goto LAB21;

LAB23:    t10 = (t0 + 2152U);
    t11 = *((char **)t10);
    t10 = (t0 + 6440U);
    t16 = ieee_p_3620187407_sub_970019341842429312_3965413181(IEEE_P_3620187407, t11, t10, 300);
    t1 = t16;
    goto LAB25;

LAB26:    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t8 = (t0 + 6440U);
    t15 = ieee_p_3620187407_sub_970019341842429312_3965413181(IEEE_P_3620187407, t9, t8, 300);
    t4 = t15;
    goto LAB28;

LAB29:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 6440U);
    t14 = ieee_p_3620187407_sub_970019341842501186_3965413181(IEEE_P_3620187407, t6, t5, 200);
    t7 = t14;
    goto LAB31;

}


extern void work_a_0042408848_1985558087_init()
{
	static char *pe[] = {(void *)work_a_0042408848_1985558087_p_0};
	xsi_register_didat("work_a_0042408848_1985558087", "isim/vgatest_isim_beh.exe.sim/work/a_0042408848_1985558087.didat");
	xsi_register_executes(pe);
}
