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
static const char *ng0 = "C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/simple_CPU_adder_Lab11/ALU_8bit.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2540846514_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_1581439539_1181938964_p_0(char *t0)
{
    char t30[16];
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
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned int t31;
    unsigned int t32;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9360);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB11:    t5 = (t0 + 9363);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB12:    t8 = (t0 + 9366);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB13:    t11 = (t0 + 9369);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB14:    t14 = (t0 + 9372);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB15:    t17 = (t0 + 9375);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB16:    t20 = (t0 + 9378);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB17:
LAB10:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9164U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 9180U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t30, t2, t1, t5, t3);
    t8 = (t30 + 12U);
    t31 = *((unsigned int *)t8);
    t32 = (1U * t31);
    t29 = (8U != t32);
    if (t29 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5320);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t1 = (t0 + 5208);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(37, ng0);
    t23 = (t0 + 1992U);
    t24 = *((char **)t23);
    t23 = (t0 + 5320);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 8U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t29 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t29;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t29 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t29;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9164U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 9180U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t30, t2, t1, t5, t3);
    t8 = (t30 + 12U);
    t31 = *((unsigned int *)t8);
    t32 = (1U * t31);
    t29 = (8U != t32);
    if (t29 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 5320);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9164U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 9180U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t30, t2, t1, t5, t3);
    t8 = (t30 + 12U);
    t31 = *((unsigned int *)t8);
    t32 = (1U * t31);
    t29 = (8U != t32);
    if (t29 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 5320);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 9381);
    t3 = (t0 + 5320);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t29 = *((unsigned char *)t2);
    t1 = (t0 + 5384);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t29;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9164U);
    t3 = ieee_p_1242562249_sub_2540846514_1035706684(IEEE_P_1242562249, t30, t2, t1, 1);
    t5 = (t0 + 5320);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB18:;
LAB19:    xsi_size_not_matching(8U, t32, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t32, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t32, 0);
    goto LAB24;

}

static void work_a_1581439539_1181938964_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5224);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1581439539_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5512);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1581439539_1181938964_init()
{
	static char *pe[] = {(void *)work_a_1581439539_1181938964_p_0,(void *)work_a_1581439539_1181938964_p_1,(void *)work_a_1581439539_1181938964_p_2};
	xsi_register_didat("work_a_1581439539_1181938964", "isim/testBench_isim_beh.exe.sim/work/a_1581439539_1181938964.didat");
	xsi_register_executes(pe);
}
