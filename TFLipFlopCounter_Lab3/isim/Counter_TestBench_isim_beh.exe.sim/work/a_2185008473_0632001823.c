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
static const char *ng0 = "C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/TFLipFlopCounter_Lab3/Counter_TFF_Based.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void work_a_2185008473_0632001823_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3792);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t19 = (2 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t7 = (t8 + t22);
    t4 = *((unsigned char *)t7);
    t5 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t4);
    t11 = (t0 + 1512U);
    t17 = *((char **)t11);
    t27 = (1 - 0);
    t28 = (t27 * 1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t11 = (t17 + t30);
    t6 = *((unsigned char *)t11);
    t9 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t5, t6);
    t18 = (t0 + 3872);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t33 = (t26 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = t9;
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t19 = (2 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t7 = (t8 + t22);
    t4 = *((unsigned char *)t7);
    t5 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t4);
    t11 = (t0 + 3936);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t5;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 4000);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t1;
    xsi_driver_first_trans_fast(t7);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 1152U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1512U);
    t11 = *((char **)t7);
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t7 = (t11 + t15);
    t16 = *((unsigned char *)t7);
    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t19 = (2 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t23 = *((unsigned char *)t17);
    t24 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t16, t23);
    t25 = (t0 + 1512U);
    t26 = *((char **)t25);
    t27 = (1 - 0);
    t28 = (t27 * 1);
    t29 = (1U * t28);
    t30 = (0 + t29);
    t25 = (t26 + t30);
    t31 = *((unsigned char *)t25);
    t32 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t24, t31);
    t33 = (t0 + 3872);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    *((unsigned char *)t37) = t32;
    xsi_driver_first_trans_fast(t33);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t19 = (2 - 0);
    t20 = (t19 * 1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t7 = (t8 + t22);
    t4 = *((unsigned char *)t7);
    t5 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t1, t4);
    t11 = (t0 + 3936);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t5;
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t7 = (t0 + 4000);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t1;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

}


extern void work_a_2185008473_0632001823_init()
{
	static char *pe[] = {(void *)work_a_2185008473_0632001823_p_0};
	xsi_register_didat("work_a_2185008473_0632001823", "isim/Counter_TestBench_isim_beh.exe.sim/work/a_2185008473_0632001823.didat");
	xsi_register_executes(pe);
}
