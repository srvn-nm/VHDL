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
static const char *ng0 = "C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/BitALU_Lab10/ALU_8bit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3620187407;

char *ieee_p_1242562249_sub_2540846514_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1581439539_3212880686_p_0(char *t0)
{
    char t26[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned char t29;

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9488);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB10:    t5 = (t0 + 9491);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB11:    t8 = (t0 + 9494);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB12:    t11 = (t0 + 9497);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB13:    t14 = (t0 + 9500);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB14:    t17 = (t0 + 9503);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB15:
LAB9:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9268U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 9284U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (8U != t28);
    if (t29 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 5584);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t1 = (t0 + 5456);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(69, ng0);
    t20 = (t0 + 2152U);
    t21 = *((char **)t20);
    t20 = (t0 + 5584);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t21, 8U);
    xsi_driver_first_trans_fast(t20);
    goto LAB2;

LAB4:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9268U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 9284U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (8U != t28);
    if (t29 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 5584);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9268U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 9284U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (8U != t28);
    if (t29 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 5584);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 9506);
    t3 = (t0 + 5584);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5584);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9268U);
    t3 = ieee_p_1242562249_sub_2540846514_1035706684(IEEE_P_1242562249, t26, t2, t1, 1);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB16:;
LAB17:    xsi_size_not_matching(8U, t28, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, t28, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t28, 0);
    goto LAB22;

}

static void work_a_1581439539_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5472);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1581439539_3212880686_p_2(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 9268U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 9284U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (9U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5712);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 9U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 5488);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t15, 0);
    goto LAB6;

}

static void work_a_1581439539_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 2472U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 2632U);
    t11 = *((char **)t8);
    t12 = *((unsigned char *)t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t12);
    t14 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t7, t13);
    t8 = (t0 + 5776);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t19 = (t0 + 5504);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1581439539_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1581439539_3212880686_p_0,(void *)work_a_1581439539_3212880686_p_1,(void *)work_a_1581439539_3212880686_p_2,(void *)work_a_1581439539_3212880686_p_3};
	xsi_register_didat("work_a_1581439539_3212880686", "isim/alu_tb_isim_beh.exe.sim/work/a_1581439539_3212880686.didat");
	xsi_register_executes(pe);
}
