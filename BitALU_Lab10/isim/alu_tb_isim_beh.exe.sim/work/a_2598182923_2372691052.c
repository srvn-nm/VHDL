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
static const char *ng0 = "C:/Users/ASUS.PIESC/OneDrive/Desktop/Programing/VHDL/BitALU_Lab10/alu_tb.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2598182923_2372691052_p_0(char *t0)
{
    char t12[16];
    char t13[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5592);
    t5 = (t0 + 3216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5600);
    t5 = (t0 + 3280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5608);
    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5611);
    *((int *)t2) = 0;
    t4 = (t0 + 5615);
    *((int *)t4) = 5;
    t10 = 0;
    t11 = 5;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5623);
    t5 = (t0 + 3216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5631);
    t5 = (t0 + 3280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(96, ng0);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t5 = (t0 + 5524U);
    t7 = (t0 + 5619);
    t9 = (t13 + 0U);
    t14 = (t9 + 0U);
    *((int *)t14) = 0;
    t14 = (t9 + 4U);
    *((int *)t14) = 3;
    t14 = (t9 + 8U);
    *((int *)t14) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t9 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t6, t5, t7, t13);
    t17 = (t12 + 12U);
    t16 = *((unsigned int *)t17);
    t18 = (1U * t16);
    t19 = (3U != t18);
    if (t19 == 1)
        goto LAB12;

LAB13:    t20 = (t0 + 3344);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t14, 3U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(92, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t3);

LAB16:    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB10:    t2 = (t0 + 5611);
    t10 = *((int *)t2);
    t4 = (t0 + 5615);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB11;

LAB18:    t15 = (t10 + 1);
    t10 = t15;
    t5 = (t0 + 5611);
    *((int *)t5) = t10;
    goto LAB8;

LAB12:    xsi_size_not_matching(3U, t18, 0);
    goto LAB13;

LAB14:    goto LAB10;

LAB15:    goto LAB14;

LAB17:    goto LAB15;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}


extern void work_a_2598182923_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2598182923_2372691052_p_0};
	xsi_register_didat("work_a_2598182923_2372691052", "isim/alu_tb_isim_beh.exe.sim/work/a_2598182923_2372691052.didat");
	xsi_register_executes(pe);
}
