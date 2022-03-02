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
static const char *ng0 = "C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/FlipFlop_Lab3/JKFlipFlop.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1390940717_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t6 = (t4 == (unsigned char)3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3352);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB3;

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1032U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB13;

LAB14:    t8 = (unsigned char)0;

LAB15:    if (t8 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t6 = (t4 == (unsigned char)2);
    if (t6 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t6 = (t4 == (unsigned char)3);
    if (t6 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB21;

LAB22:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 1968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = t4;

LAB11:    goto LAB3;

LAB7:    t1 = (t0 + 1472U);
    t7 = xsi_signal_has_event(t1);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);
    goto LAB11;

LAB13:    t5 = (t0 + 1192U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t8 = t14;
    goto LAB15;

LAB16:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1968U);
    t9 = *((char **)t1);
    t1 = (t9 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB11;

LAB18:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)3);
    t3 = t8;
    goto LAB20;

LAB21:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1968U);
    t9 = *((char **)t1);
    t1 = (t9 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB11;

LAB23:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)2);
    t3 = t8;
    goto LAB25;

}


extern void work_a_1390940717_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1390940717_3212880686_p_0};
	xsi_register_didat("work_a_1390940717_3212880686", "isim/jk_TB_isim_beh.exe.sim/work/a_1390940717_3212880686.didat");
	xsi_register_executes(pe);
}
