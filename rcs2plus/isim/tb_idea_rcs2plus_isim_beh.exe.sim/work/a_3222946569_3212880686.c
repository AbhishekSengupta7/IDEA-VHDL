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
static const char *ng0 = "/home/ise/Xil_proj/submit/rcs2plus/control.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_3222946569_3212880686_p_0(char *t0)
{
    char t11[16];
    char t20[16];
    char t25[16];
    char t37[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned char t24;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    int t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(218, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:
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
    t7 = (t0 + 2472U);
    t8 = *((char **)t7);
    t7 = (t0 + 6984U);
    t9 = (t0 + 7014);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 2;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t8, t7, t9, t11);
    if (t16 == 1)
        goto LAB11;

LAB12:    t6 = (unsigned char)0;

LAB13:    if (t6 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6984U);
    t7 = (t0 + 7020);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 2;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t7, t11);
    if (t3 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6984U);
    t7 = (t0 + 7029);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 2;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t7, t11);
    if (t3 != 0)
        goto LAB21;

LAB22:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(222, ng0);
    t22 = (t0 + 2472U);
    t26 = *((char **)t22);
    t22 = (t0 + 6984U);
    t27 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t25, t26, t22, 2);
    t28 = (t25 + 12U);
    t15 = *((unsigned int *)t28);
    t29 = (1U * t15);
    t30 = (3U != t29);
    if (t30 == 1)
        goto LAB14;

LAB15:    t31 = (t0 + 4288);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t27, 3U);
    xsi_driver_first_trans_fast(t31);
    goto LAB9;

LAB11:    t13 = (t0 + 2472U);
    t17 = *((char **)t13);
    t13 = (t0 + 6984U);
    t18 = (t0 + 7017);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 2;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (2 - 0);
    t15 = (t23 * 1);
    t15 = (t15 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t15;
    t24 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t17, t13, t18, t20);
    t6 = t24;
    goto LAB13;

LAB14:    xsi_size_not_matching(3U, t29, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(225, ng0);
    t10 = (t0 + 1192U);
    t12 = *((char **)t10);
    t4 = *((unsigned char *)t12);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 7026);
    t7 = (t0 + 4288);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t7);

LAB19:    goto LAB9;

LAB18:    xsi_set_current_line(226, ng0);
    t10 = (t0 + 7023);
    t17 = (t0 + 4288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 3U);
    xsi_driver_first_trans_fast(t17);
    goto LAB19;

LAB21:    xsi_set_current_line(233, ng0);
    t10 = (t0 + 2472U);
    t12 = *((char **)t10);
    t10 = (t0 + 6984U);
    t13 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t20, t12, t10, 1);
    t17 = (t20 + 12U);
    t15 = *((unsigned int *)t17);
    t29 = (1U * t15);
    t4 = (3U != t29);
    if (t4 == 1)
        goto LAB23;

LAB24:    t18 = (t0 + 4288);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t26 = *((char **)t22);
    memcpy(t26, t13, 3U);
    xsi_driver_first_trans_fast(t18);
    goto LAB9;

LAB23:    xsi_size_not_matching(3U, t29, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t2 = (t0 + 6984U);
    t8 = (t0 + 7032);
    t10 = (t11 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 0;
    t12 = (t10 + 4U);
    *((int *)t12) = 2;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t15;
    t6 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t7, t2, t8, t11);
    if (t6 == 1)
        goto LAB34;

LAB35:    t5 = (unsigned char)0;

LAB36:    if (t5 == 1)
        goto LAB31;

LAB32:    t4 = (unsigned char)0;

LAB33:    if (t4 != 0)
        goto LAB28;

LAB30:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6984U);
    t7 = (t0 + 7041);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 2;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t7, t11);
    if (t3 != 0)
        goto LAB39;

LAB40:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6984U);
    t7 = (t0 + 7044);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 2;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t7, t11);
    if (t3 != 0)
        goto LAB43;

LAB44:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6984U);
    t7 = (t0 + 7050);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 2;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t7, t11);
    if (t3 != 0)
        goto LAB45;

LAB46:
LAB29:    goto LAB26;

LAB28:    xsi_set_current_line(243, ng0);
    t31 = (t0 + 2472U);
    t32 = *((char **)t31);
    t31 = (t0 + 6984U);
    t33 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t37, t32, t31, 2);
    t34 = (t37 + 12U);
    t15 = *((unsigned int *)t34);
    t29 = (1U * t15);
    t30 = (3U != t29);
    if (t30 == 1)
        goto LAB37;

LAB38:    t35 = (t0 + 4288);
    t38 = (t35 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t33, 3U);
    xsi_driver_first_trans_fast(t35);
    goto LAB29;

LAB31:    t21 = (t0 + 2472U);
    t22 = *((char **)t21);
    t21 = (t0 + 6984U);
    t26 = (t0 + 7038);
    t28 = (t25 + 0U);
    t31 = (t28 + 0U);
    *((int *)t31) = 0;
    t31 = (t28 + 4U);
    *((int *)t31) = 2;
    t31 = (t28 + 8U);
    *((int *)t31) = 1;
    t36 = (2 - 0);
    t15 = (t36 * 1);
    t15 = (t15 + 1);
    t31 = (t28 + 12U);
    *((unsigned int *)t31) = t15;
    t24 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t22, t21, t26, t25);
    t4 = t24;
    goto LAB33;

LAB34:    t12 = (t0 + 2472U);
    t13 = *((char **)t12);
    t12 = (t0 + 6984U);
    t17 = (t0 + 7035);
    t19 = (t20 + 0U);
    t21 = (t19 + 0U);
    *((int *)t21) = 0;
    t21 = (t19 + 4U);
    *((int *)t21) = 2;
    t21 = (t19 + 8U);
    *((int *)t21) = 1;
    t23 = (2 - 0);
    t15 = (t23 * 1);
    t15 = (t15 + 1);
    t21 = (t19 + 12U);
    *((unsigned int *)t21) = t15;
    t16 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t13, t12, t17, t20);
    t5 = t16;
    goto LAB36;

LAB37:    xsi_size_not_matching(3U, t29, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(246, ng0);
    t10 = (t0 + 2472U);
    t12 = *((char **)t10);
    t10 = (t0 + 6984U);
    t13 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t20, t12, t10, 1);
    t17 = (t20 + 12U);
    t15 = *((unsigned int *)t17);
    t29 = (1U * t15);
    t4 = (3U != t29);
    if (t4 == 1)
        goto LAB41;

LAB42:    t18 = (t0 + 4288);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t26 = *((char **)t22);
    memcpy(t26, t13, 3U);
    xsi_driver_first_trans_fast(t18);
    goto LAB29;

LAB41:    xsi_size_not_matching(3U, t29, 0);
    goto LAB42;

LAB43:    xsi_set_current_line(249, ng0);
    t10 = (t0 + 7047);
    t13 = (t0 + 4288);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t10, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB29;

LAB45:    xsi_set_current_line(252, ng0);
    t10 = (t0 + 1192U);
    t12 = *((char **)t10);
    t4 = *((unsigned char *)t12);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB47;

LAB49:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 7056);
    t7 = (t0 + 4288);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 3U);
    xsi_driver_first_trans_fast(t7);

LAB48:    goto LAB29;

LAB47:    xsi_set_current_line(253, ng0);
    t10 = (t0 + 7053);
    t17 = (t0 + 4288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 3U);
    xsi_driver_first_trans_fast(t17);
    goto LAB48;

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

LAB0:    xsi_set_current_line(273, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7059);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 7062);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 7065);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 7068);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 7071);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 7074);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 7077);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 7080);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:
LAB2:    t1 = (t0 + 4208);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(276, ng0);
    t26 = (t0 + 4352);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t26);
    xsi_set_current_line(277, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(278, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(279, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(280, ng0);
    t1 = (t0 + 7083);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(281, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(284, ng0);
    t1 = (t0 + 7087);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB22:    goto LAB2;

LAB4:    xsi_set_current_line(288, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(289, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(290, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(291, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(292, ng0);
    t1 = (t0 + 7089);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(293, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(296, ng0);
    t1 = (t0 + 7093);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB25:    goto LAB2;

LAB5:    xsi_set_current_line(300, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(301, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(302, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(303, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(304, ng0);
    t1 = (t0 + 7095);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(305, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(310, ng0);
    t1 = (t0 + 7099);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(314, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(315, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(316, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(317, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(318, ng0);
    t1 = (t0 + 7101);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(319, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(322, ng0);
    t1 = (t0 + 7105);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(326, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(327, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(328, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(329, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(330, ng0);
    t1 = (t0 + 7107);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(331, ng0);
    t1 = (t0 + 7109);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(334, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(335, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(336, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(337, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(338, ng0);
    t1 = (t0 + 7111);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(339, ng0);
    t1 = (t0 + 7113);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(342, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(343, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(344, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(345, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(346, ng0);
    t1 = (t0 + 7115);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(347, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(350, ng0);
    t1 = (t0 + 7119);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB34:    goto LAB2;

LAB10:    xsi_set_current_line(354, ng0);
    t1 = (t0 + 4352);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(355, ng0);
    t1 = (t0 + 4416);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(356, ng0);
    t1 = (t0 + 4480);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(357, ng0);
    t1 = (t0 + 4544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(358, ng0);
    t1 = (t0 + 7121);
    t3 = (t0 + 4608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(359, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t31 = *((unsigned char *)t2);
    t32 = (t31 == (unsigned char)2);
    if (t32 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(362, ng0);
    t1 = (t0 + 7125);
    t3 = (t0 + 4672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);

LAB37:    goto LAB2;

LAB20:;
LAB21:    xsi_set_current_line(282, ng0);
    t1 = (t0 + 7085);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB22;

LAB24:    xsi_set_current_line(294, ng0);
    t1 = (t0 + 7091);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB25;

LAB27:    xsi_set_current_line(306, ng0);
    t1 = (t0 + 7097);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB28;

LAB30:    xsi_set_current_line(320, ng0);
    t1 = (t0 + 7103);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB31;

LAB33:    xsi_set_current_line(348, ng0);
    t1 = (t0 + 7117);
    t5 = (t0 + 4672);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB34;

LAB36:    xsi_set_current_line(360, ng0);
    t1 = (t0 + 7123);
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
	xsi_register_didat("work_a_3222946569_3212880686", "isim/tb_idea_rcs2plus_isim_beh.exe.sim/work/a_3222946569_3212880686.didat");
	xsi_register_executes(pe);
}
