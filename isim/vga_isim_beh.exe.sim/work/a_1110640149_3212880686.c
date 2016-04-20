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



static void work_a_1110640149_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    unsigned char t17;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3488U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 < t5);
    if (t6 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3488U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = (t0 + 3608U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t5 + t8);
    t6 = (t3 < t9);
    if (t6 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3488U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = (t0 + 3608U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t5 + t8);
    t1 = (t0 + 3368U);
    t10 = *((char **)t1);
    t14 = *((int *)t10);
    t15 = (t9 + t14);
    t6 = (t3 < t15);
    if (t6 != 0)
        goto LAB7;

LAB8:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3848U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 < t5);
    if (t6 != 0)
        goto LAB9;

LAB10:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 6992);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);

LAB3:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 == 0);
    if (t6 != 0)
        goto LAB11;

LAB13:
LAB12:    t1 = (t0 + 6864);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 + 1);
    t1 = (t0 + 6992);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 7056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 7120);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2312U);
    t10 = *((char **)t1);
    t14 = *((int *)t10);
    t15 = (t14 + 1);
    t1 = (t0 + 6992);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((int *)t16) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 7056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 7184);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7056);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 + 1);
    t1 = (t0 + 6992);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB9:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 7056);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 + 1);
    t1 = (t0 + 6992);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB11:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = (t0 + 4088U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t17 = (t5 < t8);
    if (t17 != 0)
        goto LAB14;

LAB16:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 4088U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = (t0 + 4208U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t5 + t8);
    t6 = (t3 < t9);
    if (t6 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 4088U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = (t0 + 4208U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t5 + t8);
    t1 = (t0 + 3968U);
    t10 = *((char **)t1);
    t14 = *((int *)t10);
    t15 = (t9 + t14);
    t6 = (t3 < t15);
    if (t6 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3848U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 < t5);
    if (t6 != 0)
        goto LAB21;

LAB22:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 7248);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2472U);
    t10 = *((char **)t1);
    t9 = *((int *)t10);
    t14 = (t9 + 1);
    t1 = (t0 + 7248);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((int *)t16) = t14;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 7056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7184);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2472U);
    t10 = *((char **)t1);
    t14 = *((int *)t10);
    t15 = (t14 + 1);
    t1 = (t0 + 7248);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((int *)t16) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 7056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 7184);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB19:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 7056);
    t11 = (t1 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 + 1);
    t1 = (t0 + 7248);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB21:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 7056);
    t7 = (t1 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t5 = (t3 + 1);
    t1 = (t0 + 7248);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

}

static void work_a_1110640149_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(108, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7312);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6880);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(109, ng0);

LAB3:    t1 = (t0 + 7376);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(110, ng0);

LAB3:    t1 = (t0 + 7440);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(111, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7504);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6896);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(112, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7568);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 6912);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1110640149_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1110640149_3212880686_p_0,(void *)work_a_1110640149_3212880686_p_1,(void *)work_a_1110640149_3212880686_p_2,(void *)work_a_1110640149_3212880686_p_3,(void *)work_a_1110640149_3212880686_p_4,(void *)work_a_1110640149_3212880686_p_5};
	xsi_register_didat("work_a_1110640149_3212880686", "isim/vga_isim_beh.exe.sim/work/a_1110640149_3212880686.didat");
	xsi_register_executes(pe);
}
