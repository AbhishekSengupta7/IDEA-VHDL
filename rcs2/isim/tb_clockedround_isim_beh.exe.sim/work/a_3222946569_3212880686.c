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
static const char *ng0 = "/home/ise/Xil_proj/submit/rcs2/control.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_3222946569_3212880686_p_0(char *t0)
{
    char t10[16];
    char t16[16];
    char t28[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:
LAB3:    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(221, ng0);
    t6 = (t0 + 2472U);
    t7 = *((char **)t6);
    t6 = (t0 + 6920U);
    t8 = (t0 + 6950);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 2;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t7, t6, t8, t10);
    if (t15 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6920U);
    t6 = (t0 + 6953);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t3 != 0)
        goto LAB13;

LAB14:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(222, ng0);
    t12 = (t0 + 2472U);
    t17 = *((char **)t12);
    t12 = (t0 + 6920U);
    t18 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t16, t17, t12, 1);
    t19 = (t16 + 12U);
    t14 = *((unsigned int *)t19);
    t20 = (1U * t14);
    t21 = (3U != t20);
    if (t21 == 1)
        goto LAB11;

LAB12:    t22 = (t0 + 4288);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t18, 3U);
    xsi_driver_first_trans_fast(t22);
    goto LAB9;

LAB11:    xsi_size_not_matching(3U, t20, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(225, ng0);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t4 = *((unsigned char *)t11);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 6959);
    t6 = (t0 + 4288);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB16:    goto LAB9;

LAB15:    xsi_set_current_line(226, ng0);
    t9 = (t0 + 6956);
    t17 = (t0 + 4288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t9, 3U);
    xsi_driver_first_trans_fast(t17);
    goto LAB16;

LAB18:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t2 = (t0 + 6920U);
    t7 = (t0 + 6962);
    t9 = (t10 + 0U);
    t11 = (t9 + 0U);
    *((int *)t11) = 0;
    t11 = (t9 + 4U);
    *((int *)t11) = 2;
    t11 = (t9 + 8U);
    *((int *)t11) = 1;
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t11 = (t9 + 12U);
    *((unsigned int *)t11) = t14;
    t5 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t6, t2, t7, t10);
    if (t5 == 1)
        goto LAB24;

LAB25:    t4 = (unsigned char)0;

LAB26:    if (t4 != 0)
        goto LAB21;

LAB23:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6920U);
    t6 = (t0 + 6968);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t3 != 0)
        goto LAB29;

LAB30:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6920U);
    t6 = (t0 + 6974);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (2 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t3 != 0)
        goto LAB31;

LAB32:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(240, ng0);
    t22 = (t0 + 2472U);
    t23 = *((char **)t22);
    t22 = (t0 + 6920U);
    t24 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t28, t23, t22, 1);
    t25 = (t28 + 12U);
    t14 = *((unsigned int *)t25);
    t20 = (1U * t14);
    t21 = (3U != t20);
    if (t21 == 1)
        goto LAB27;

LAB28:    t26 = (t0 + 4288);
    t29 = (t26 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t24, 3U);
    xsi_driver_first_trans_fast(t26);
    goto LAB22;

LAB24:    t11 = (t0 + 2472U);
    t12 = *((char **)t11);
    t11 = (t0 + 6920U);
    t17 = (t0 + 6965);
    t19 = (t16 + 0U);
    t22 = (t19 + 0U);
    *((int *)t22) = 0;
    t22 = (t19 + 4U);
    *((int *)t22) = 2;
    t22 = (t19 + 8U);
    *((int *)t22) = 1;
    t27 = (2 - 0);
    t14 = (t27 * 1);
    t14 = (t14 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t14;
    t15 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t12, t11, t17, t16);
    t4 = t15;
    goto LAB26;

LAB27:    xsi_size_not_matching(3U, t20, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(243, ng0);
    t9 = (t0 + 6971);
    t12 = (t0 + 4288);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t9, 3U);
    xsi_driver_first_trans_fast(t12);
    goto LAB22;

LAB31:    xsi_set_current_line(247, ng0);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t4 = *((unsigned char *)t11);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 6980);
    t6 = (t0 + 4288);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB34:    goto LAB22;

LAB33:    xsi_set_current_line(248, ng0);
    t9 = (t0 + 6977);
    t17 = (t0 + 4288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t9, 3U);
    xsi_driver_first_trans_fast(t17);
    goto LAB34;

}

static void work_a_3222946569_3212880686_p_1(char *t0)
{
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
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;

LAB0:    xsi_set_current_line(268, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6983);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 6986);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 6989);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 6992);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 6995);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 6998);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 7001);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 7004);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:
LAB2:    t1 = (t0 + 4208);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(271, ng0);
    t26 = (t0 + 4352);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t26);
    xsi_set_current_line(272, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(273, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(274, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(275, ng0);
    t1 = (t0 + 7007);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(276, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(279, ng0);
    t1 = (t0 + 7011);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB22:    goto LAB2;

LAB4:    xsi_set_current_line(283, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(284, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(285, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(286, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(287, ng0);
    t1 = (t0 + 7013);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(288, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(291, ng0);
    t1 = (t0 + 7017);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB25:    goto LAB2;

LAB5:    xsi_set_current_line(295, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(296, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(297, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(298, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(299, ng0);
    t1 = (t0 + 7019);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(300, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(305, ng0);
    t1 = (t0 + 7023);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(309, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(310, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(311, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(312, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(313, ng0);
    t1 = (t0 + 7025);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(314, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(317, ng0);
    t1 = (t0 + 7029);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(321, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(322, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(323, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(324, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(325, ng0);
    t1 = (t0 + 7031);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(326, ng0);
    t1 = (t0 + 7033);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(329, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(330, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(331, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(332, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(333, ng0);
    t1 = (t0 + 7035);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(334, ng0);
    t1 = (t0 + 7037);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(337, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(338, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(339, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(340, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(341, ng0);
    t1 = (t0 + 7039);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(342, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(345, ng0);
    t1 = (t0 + 7043);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB34:    goto LAB2;

LAB10:    xsi_set_current_line(349, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(350, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(351, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(352, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(353, ng0);
    t1 = (t0 + 7045);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(354, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(357, ng0);
    t1 = (t0 + 7049);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB37:    goto LAB2;

LAB20:;
LAB21:    xsi_set_current_line(277, ng0);
    t1 = (t0 + 7009);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB22;

LAB24:    xsi_set_current_line(289, ng0);
    t1 = (t0 + 7015);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB25;

LAB27:    xsi_set_current_line(301, ng0);
    t1 = (t0 + 7021);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB28;

LAB30:    xsi_set_current_line(315, ng0);
    t1 = (t0 + 7027);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB31;

LAB33:    xsi_set_current_line(343, ng0);
    t1 = (t0 + 7041);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB34;

LAB36:    xsi_set_current_line(355, ng0);
    t1 = (t0 + 7047);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB37;

}


extern void work_a_3222946569_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3222946569_3212880686_p_0,(void *)work_a_3222946569_3212880686_p_1};
	xsi_register_didat("work_a_3222946569_3212880686", "isim/tb_clockedround_isim_beh.exe.sim/work/a_3222946569_3212880686.didat");
	xsi_register_executes(pe);
}
