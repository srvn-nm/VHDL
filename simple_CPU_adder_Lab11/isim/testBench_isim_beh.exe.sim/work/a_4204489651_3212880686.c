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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/simple_CPU_adder_Lab11/ROM.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_4204489651_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6036U);
    t3 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t0 + 3392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 992U);
    t10 = xsi_signal_has_event(t1);
    if (t10 == 1)
        goto LAB5;

LAB6:    t9 = (unsigned char)0;

LAB7:    if (t9 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1032U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    t9 = t12;
    goto LAB7;

LAB8:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 1832U);
    t7 = *((char **)t2);
    t3 = *((int *)t7);
    t15 = (t3 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t3);
    t17 = (8U * t16);
    t18 = (0 + t17);
    t2 = (t6 + t18);
    t8 = (t0 + 3456);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t2, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB9;

}


extern void work_a_4204489651_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4204489651_3212880686_p_0};
	xsi_register_didat("work_a_4204489651_3212880686", "isim/testBench_isim_beh.exe.sim/work/a_4204489651_3212880686.didat");
	xsi_register_executes(pe);
}
