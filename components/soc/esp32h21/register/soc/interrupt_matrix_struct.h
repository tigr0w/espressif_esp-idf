/**
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/** Group: Configuration Registers */
/** Type of core0_pmu_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_pmu_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_PMU_INTR mapping register
         */
        uint32_t core0_pmu_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_pmu_intr_map_reg_t;

/** Type of core0_efuse_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_efuse_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_EFUSE_INTR mapping register
         */
        uint32_t core0_efuse_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_efuse_intr_map_reg_t;

/** Type of core0_lp_rtc_timer_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_lp_rtc_timer_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_LP_RTC_TIMER_INTR mapping register
         */
        uint32_t core0_lp_rtc_timer_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_lp_rtc_timer_intr_map_reg_t;

/** Type of core0_lp_ble_timer_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_lp_ble_timer_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_LP_BLE_TIMER_INTR mapping register
         */
        uint32_t core0_lp_ble_timer_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_lp_ble_timer_intr_map_reg_t;

/** Type of core0_lp_wdt_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_lp_wdt_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_LP_WDT_INTR mapping register
         */
        uint32_t core0_lp_wdt_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_lp_wdt_intr_map_reg_t;

/** Type of core0_lp_peri_timeout_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_lp_peri_timeout_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_LP_PERI_TIMEOUT_INTR mapping register
         */
        uint32_t core0_lp_peri_timeout_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_lp_peri_timeout_intr_map_reg_t;

/** Type of core0_lp_apm_m0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_lp_apm_m0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_LP_APM_M0_INTR mapping register
         */
        uint32_t core0_lp_apm_m0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_lp_apm_m0_intr_map_reg_t;

/** Type of core0_cpu_intr_from_cpu_0_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_cpu_intr_from_cpu_0_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CPU_INTR_FROM_CPU_0 mapping register
         */
        uint32_t core0_cpu_intr_from_cpu_0_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_cpu_intr_from_cpu_0_map_reg_t;

/** Type of core0_cpu_intr_from_cpu_1_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_cpu_intr_from_cpu_1_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CPU_INTR_FROM_CPU_1 mapping register
         */
        uint32_t core0_cpu_intr_from_cpu_1_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_cpu_intr_from_cpu_1_map_reg_t;

/** Type of core0_cpu_intr_from_cpu_2_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_cpu_intr_from_cpu_2_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CPU_INTR_FROM_CPU_2 mapping register
         */
        uint32_t core0_cpu_intr_from_cpu_2_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_cpu_intr_from_cpu_2_map_reg_t;

/** Type of core0_cpu_intr_from_cpu_3_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_cpu_intr_from_cpu_3_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CPU_INTR_FROM_CPU_3 mapping register
         */
        uint32_t core0_cpu_intr_from_cpu_3_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_cpu_intr_from_cpu_3_map_reg_t;

/** Type of core0_assist_debug_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_assist_debug_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_ASSIST_DEBUG_INTR mapping register
         */
        uint32_t core0_assist_debug_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_assist_debug_intr_map_reg_t;

/** Type of core0_trace_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_trace_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_TRACE_INTR mapping register
         */
        uint32_t core0_trace_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_trace_intr_map_reg_t;

/** Type of core0_cache_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_cache_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CACHE_INTR mapping register
         */
        uint32_t core0_cache_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_cache_intr_map_reg_t;

/** Type of core0_cpu_peri_timeout_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_cpu_peri_timeout_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CPU_PERI_TIMEOUT_INTR mapping register
         */
        uint32_t core0_cpu_peri_timeout_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_cpu_peri_timeout_intr_map_reg_t;

/** Type of core0_bt_mac_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_bt_mac_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_BT_MAC_INTR mapping register
         */
        uint32_t core0_bt_mac_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_bt_mac_intr_map_reg_t;

/** Type of core0_bt_bb_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_bt_bb_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_BT_BB_INTR mapping register
         */
        uint32_t core0_bt_bb_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_bt_bb_intr_map_reg_t;

/** Type of core0_bt_bb_nmi_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_bt_bb_nmi_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_BT_BB_NMI mapping register
         */
        uint32_t core0_bt_bb_nmi_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_bt_bb_nmi_map_reg_t;

/** Type of core0_coex_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_coex_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_COEX_INTR mapping register
         */
        uint32_t core0_coex_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_coex_intr_map_reg_t;

/** Type of core0_ble_timer_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_ble_timer_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_BLE_TIMER_INTR mapping register
         */
        uint32_t core0_ble_timer_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_ble_timer_intr_map_reg_t;

/** Type of core0_ble_sec_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_ble_sec_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_BLE_SEC_INTR mapping register
         */
        uint32_t core0_ble_sec_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_ble_sec_intr_map_reg_t;

/** Type of core0_zb_mac_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_zb_mac_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_ZB_MAC_INTR mapping register
         */
        uint32_t core0_zb_mac_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_zb_mac_intr_map_reg_t;

/** Type of core0_gpio_interrupt_pro_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_gpio_interrupt_pro_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_GPIO_INTERRUPT_PRO mapping register
         */
        uint32_t core0_gpio_interrupt_pro_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_gpio_interrupt_pro_map_reg_t;

/** Type of core0_gpio_interrupt_pro_nmi_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_gpio_interrupt_pro_nmi_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_GPIO_INTERRUPT_PRO_NMI mapping register
         */
        uint32_t core0_gpio_interrupt_pro_nmi_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_gpio_interrupt_pro_nmi_map_reg_t;

/** Type of core0_pau_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_pau_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_PAU_INTR mapping register
         */
        uint32_t core0_pau_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_pau_intr_map_reg_t;

/** Type of core0_hp_peri_timeout_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_hp_peri_timeout_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_HP_PERI_TIMEOUT_INTR mapping register
         */
        uint32_t core0_hp_peri_timeout_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_hp_peri_timeout_intr_map_reg_t;

/** Type of core0_hp_apm_m0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_hp_apm_m0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_HP_APM_M0_INTR mapping register
         */
        uint32_t core0_hp_apm_m0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_hp_apm_m0_intr_map_reg_t;

/** Type of core0_hp_apm_m1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_hp_apm_m1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_HP_APM_M1_INTR mapping register
         */
        uint32_t core0_hp_apm_m1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_hp_apm_m1_intr_map_reg_t;

/** Type of core0_hp_apm_m2_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_hp_apm_m2_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_HP_APM_M2_INTR mapping register
         */
        uint32_t core0_hp_apm_m2_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_hp_apm_m2_intr_map_reg_t;

/** Type of core0_hp_apm_m3_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_hp_apm_m3_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_HP_APM_M3_INTR mapping register
         */
        uint32_t core0_hp_apm_m3_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_hp_apm_m3_intr_map_reg_t;

/** Type of core0_mspi_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_mspi_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_MSPI_INTR mapping register
         */
        uint32_t core0_mspi_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_mspi_intr_map_reg_t;

/** Type of core0_i2s1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_i2s1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_I2S1_INTR mapping register
         */
        uint32_t core0_i2s1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_i2s1_intr_map_reg_t;

/** Type of core0_uhci0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_uhci0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_UHCI0_INTR mapping register
         */
        uint32_t core0_uhci0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_uhci0_intr_map_reg_t;

/** Type of core0_uart0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_uart0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_UART0_INTR mapping register
         */
        uint32_t core0_uart0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_uart0_intr_map_reg_t;

/** Type of core0_uart1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_uart1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_UART1_INTR mapping register
         */
        uint32_t core0_uart1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_uart1_intr_map_reg_t;

/** Type of core0_ledc_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_ledc_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_LEDC_INTR mapping register
         */
        uint32_t core0_ledc_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_ledc_intr_map_reg_t;

/** Type of core0_can0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_can0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_CAN0_INTR mapping register
         */
        uint32_t core0_can0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_can0_intr_map_reg_t;

/** Type of core0_usb_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_usb_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_USB_INTR mapping register
         */
        uint32_t core0_usb_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_usb_intr_map_reg_t;

/** Type of core0_rmt_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_rmt_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_RMT_INTR mapping register
         */
        uint32_t core0_rmt_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_rmt_intr_map_reg_t;

/** Type of core0_i2c_ext0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_i2c_ext0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_I2C_EXT0_INTR mapping register
         */
        uint32_t core0_i2c_ext0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_i2c_ext0_intr_map_reg_t;

/** Type of core0_i2c_ext1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_i2c_ext1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_I2C_EXT1_INTR mapping register
         */
        uint32_t core0_i2c_ext1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_i2c_ext1_intr_map_reg_t;

/** Type of core0_tg0_t0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_tg0_t0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_TG0_T0_INTR mapping register
         */
        uint32_t core0_tg0_t0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_tg0_t0_intr_map_reg_t;

/** Type of core0_tg0_wdt_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_tg0_wdt_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_TG0_WDT_INTR mapping register
         */
        uint32_t core0_tg0_wdt_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_tg0_wdt_intr_map_reg_t;

/** Type of core0_tg1_t0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_tg1_t0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_TG1_T0_INTR mapping register
         */
        uint32_t core0_tg1_t0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_tg1_t0_intr_map_reg_t;

/** Type of core0_tg1_wdt_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_tg1_wdt_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_TG1_WDT_INTR mapping register
         */
        uint32_t core0_tg1_wdt_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_tg1_wdt_intr_map_reg_t;

/** Type of core0_systimer_target0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_systimer_target0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_SYSTIMER_TARGET0_INTR mapping register
         */
        uint32_t core0_systimer_target0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_systimer_target0_intr_map_reg_t;

/** Type of core0_systimer_target1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_systimer_target1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_SYSTIMER_TARGET1_INTR mapping register
         */
        uint32_t core0_systimer_target1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_systimer_target1_intr_map_reg_t;

/** Type of core0_systimer_target2_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_systimer_target2_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_SYSTIMER_TARGET2_INTR mapping register
         */
        uint32_t core0_systimer_target2_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_systimer_target2_intr_map_reg_t;

/** Type of core0_apb_adc_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_apb_adc_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_APB_ADC_INTR mapping register
         */
        uint32_t core0_apb_adc_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_apb_adc_intr_map_reg_t;

/** Type of core0_pwm_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_pwm_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_PWM_INTR mapping register
         */
        uint32_t core0_pwm_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_pwm_intr_map_reg_t;

/** Type of core0_pcnt_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_pcnt_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_PCNT_INTR mapping register
         */
        uint32_t core0_pcnt_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_pcnt_intr_map_reg_t;

/** Type of core0_parl_io_tx_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_parl_io_tx_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_PARL_IO_TX_INTR mapping register
         */
        uint32_t core0_parl_io_tx_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_parl_io_tx_intr_map_reg_t;

/** Type of core0_parl_io_rx_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_parl_io_rx_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_PARL_IO_RX_INTR mapping register
         */
        uint32_t core0_parl_io_rx_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_parl_io_rx_intr_map_reg_t;

/** Type of core0_dma_in_ch0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_dma_in_ch0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_DMA_IN_CH0_INTR mapping register
         */
        uint32_t core0_dma_in_ch0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_dma_in_ch0_intr_map_reg_t;

/** Type of core0_dma_in_ch1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_dma_in_ch1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_DMA_IN_CH1_INTR mapping register
         */
        uint32_t core0_dma_in_ch1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_dma_in_ch1_intr_map_reg_t;

/** Type of core0_dma_in_ch2_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_dma_in_ch2_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_DMA_IN_CH2_INTR mapping register
         */
        uint32_t core0_dma_in_ch2_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_dma_in_ch2_intr_map_reg_t;

/** Type of core0_dma_out_ch0_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_dma_out_ch0_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_DMA_OUT_CH0_INTR mapping register
         */
        uint32_t core0_dma_out_ch0_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_dma_out_ch0_intr_map_reg_t;

/** Type of core0_dma_out_ch1_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_dma_out_ch1_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_DMA_OUT_CH1_INTR mapping register
         */
        uint32_t core0_dma_out_ch1_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_dma_out_ch1_intr_map_reg_t;

/** Type of core0_dma_out_ch2_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_dma_out_ch2_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_DMA_OUT_CH2_INTR mapping register
         */
        uint32_t core0_dma_out_ch2_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_dma_out_ch2_intr_map_reg_t;

/** Type of core0_gpspi2_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_gpspi2_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_GPSPI2_INTR mapping register
         */
        uint32_t core0_gpspi2_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_gpspi2_intr_map_reg_t;

/** Type of core0_aes_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_aes_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_AES_INTR mapping register
         */
        uint32_t core0_aes_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_aes_intr_map_reg_t;

/** Type of core0_sha_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_sha_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_SHA_INTR mapping register
         */
        uint32_t core0_sha_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_sha_intr_map_reg_t;

/** Type of core0_rsa_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_rsa_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_RSA_INTR mapping register
         */
        uint32_t core0_rsa_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_rsa_intr_map_reg_t;

/** Type of core0_ecc_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_ecc_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_ECC_INTR mapping register
         */
        uint32_t core0_ecc_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_ecc_intr_map_reg_t;

/** Type of core0_ecdsa_intr_map register
 *  register description
 */
typedef union {
    struct {
        /** core0_ecdsa_intr_map : R/W; bitpos: [4:0]; default: 0;
         *  CORE0_ECDSA_INTR mapping register
         */
        uint32_t core0_ecdsa_intr_map:5;
        uint32_t reserved_5:27;
    };
    uint32_t val;
} intmtx_core0_ecdsa_intr_map_reg_t;

/** Type of core0_int_status_reg_0 register
 *  register description
 */
typedef union {
    struct {
        /** core0_int_status_0 : RO; bitpos: [31:0]; default: 0;
         *  Status register for interrupt sources 0~31 mapping register
         */
        uint32_t core0_int_status_0:32;
    };
    uint32_t val;
} intmtx_core0_int_status_reg_0_reg_t;

/** Type of core0_int_status_reg_1 register
 *  register description
 */
typedef union {
    struct {
        /** core0_int_status_1 : RO; bitpos: [31:0]; default: 0;
         *  Status register for interrupt sources 32~63 mapping register
         */
        uint32_t core0_int_status_1:32;
    };
    uint32_t val;
} intmtx_core0_int_status_reg_1_reg_t;

/** Type of core0_int_status_reg_2 register
 *  register description
 */
typedef union {
    struct {
        /** core0_int_status_2 : RO; bitpos: [31:0]; default: 0;
         *  Status register for interrupt sources 64~95 mapping register
         */
        uint32_t core0_int_status_2:32;
    };
    uint32_t val;
} intmtx_core0_int_status_reg_2_reg_t;

/** Type of core0_clock_gate register
 *  register description
 */
typedef union {
    struct {
        /** core0_reg_clk_en : R/W; bitpos: [0]; default: 1;
         *  Clock register
         */
        uint32_t core0_reg_clk_en:1;
        uint32_t reserved_1:31;
    };
    uint32_t val;
} intmtx_core0_clock_gate_reg_t;

/** Type of core0_interrupt_reg_date register
 *  register description
 */
typedef union {
    struct {
        /** core0_interrupt_reg_date : R/W; bitpos: [27:0]; default: 35688784;
         *  Version control register
         */
        uint32_t core0_interrupt_reg_date:28;
        uint32_t reserved_28:4;
    };
    uint32_t val;
} intmtx_core0_interrupt_reg_date_reg_t;


typedef struct {
    volatile intmtx_core0_pmu_intr_map_reg_t core0_pmu_intr_map;
    volatile intmtx_core0_efuse_intr_map_reg_t core0_efuse_intr_map;
    volatile intmtx_core0_lp_rtc_timer_intr_map_reg_t core0_lp_rtc_timer_intr_map;
    volatile intmtx_core0_lp_ble_timer_intr_map_reg_t core0_lp_ble_timer_intr_map;
    volatile intmtx_core0_lp_wdt_intr_map_reg_t core0_lp_wdt_intr_map;
    volatile intmtx_core0_lp_peri_timeout_intr_map_reg_t core0_lp_peri_timeout_intr_map;
    volatile intmtx_core0_lp_apm_m0_intr_map_reg_t core0_lp_apm_m0_intr_map;
    volatile intmtx_core0_cpu_intr_from_cpu_0_map_reg_t core0_cpu_intr_from_cpu_0_map;
    volatile intmtx_core0_cpu_intr_from_cpu_1_map_reg_t core0_cpu_intr_from_cpu_1_map;
    volatile intmtx_core0_cpu_intr_from_cpu_2_map_reg_t core0_cpu_intr_from_cpu_2_map;
    volatile intmtx_core0_cpu_intr_from_cpu_3_map_reg_t core0_cpu_intr_from_cpu_3_map;
    volatile intmtx_core0_assist_debug_intr_map_reg_t core0_assist_debug_intr_map;
    volatile intmtx_core0_trace_intr_map_reg_t core0_trace_intr_map;
    volatile intmtx_core0_cache_intr_map_reg_t core0_cache_intr_map;
    volatile intmtx_core0_cpu_peri_timeout_intr_map_reg_t core0_cpu_peri_timeout_intr_map;
    volatile intmtx_core0_bt_mac_intr_map_reg_t core0_bt_mac_intr_map;
    volatile intmtx_core0_bt_bb_intr_map_reg_t core0_bt_bb_intr_map;
    volatile intmtx_core0_bt_bb_nmi_map_reg_t core0_bt_bb_nmi_map;
    volatile intmtx_core0_coex_intr_map_reg_t core0_coex_intr_map;
    volatile intmtx_core0_ble_timer_intr_map_reg_t core0_ble_timer_intr_map;
    volatile intmtx_core0_ble_sec_intr_map_reg_t core0_ble_sec_intr_map;
    volatile intmtx_core0_zb_mac_intr_map_reg_t core0_zb_mac_intr_map;
    volatile intmtx_core0_gpio_interrupt_pro_map_reg_t core0_gpio_interrupt_pro_map;
    volatile intmtx_core0_gpio_interrupt_pro_nmi_map_reg_t core0_gpio_interrupt_pro_nmi_map;
    volatile intmtx_core0_pau_intr_map_reg_t core0_pau_intr_map;
    volatile intmtx_core0_hp_peri_timeout_intr_map_reg_t core0_hp_peri_timeout_intr_map;
    volatile intmtx_core0_hp_apm_m0_intr_map_reg_t core0_hp_apm_m0_intr_map;
    volatile intmtx_core0_hp_apm_m1_intr_map_reg_t core0_hp_apm_m1_intr_map;
    volatile intmtx_core0_hp_apm_m2_intr_map_reg_t core0_hp_apm_m2_intr_map;
    volatile intmtx_core0_hp_apm_m3_intr_map_reg_t core0_hp_apm_m3_intr_map;
    volatile intmtx_core0_mspi_intr_map_reg_t core0_mspi_intr_map;
    volatile intmtx_core0_i2s1_intr_map_reg_t core0_i2s1_intr_map;
    volatile intmtx_core0_uhci0_intr_map_reg_t core0_uhci0_intr_map;
    volatile intmtx_core0_uart0_intr_map_reg_t core0_uart0_intr_map;
    volatile intmtx_core0_uart1_intr_map_reg_t core0_uart1_intr_map;
    volatile intmtx_core0_ledc_intr_map_reg_t core0_ledc_intr_map;
    volatile intmtx_core0_can0_intr_map_reg_t core0_can0_intr_map;
    volatile intmtx_core0_usb_intr_map_reg_t core0_usb_intr_map;
    volatile intmtx_core0_rmt_intr_map_reg_t core0_rmt_intr_map;
    volatile intmtx_core0_i2c_ext0_intr_map_reg_t core0_i2c_ext0_intr_map;
    volatile intmtx_core0_i2c_ext1_intr_map_reg_t core0_i2c_ext1_intr_map;
    volatile intmtx_core0_tg0_t0_intr_map_reg_t core0_tg0_t0_intr_map;
    volatile intmtx_core0_tg0_wdt_intr_map_reg_t core0_tg0_wdt_intr_map;
    volatile intmtx_core0_tg1_t0_intr_map_reg_t core0_tg1_t0_intr_map;
    volatile intmtx_core0_tg1_wdt_intr_map_reg_t core0_tg1_wdt_intr_map;
    volatile intmtx_core0_systimer_target0_intr_map_reg_t core0_systimer_target0_intr_map;
    volatile intmtx_core0_systimer_target1_intr_map_reg_t core0_systimer_target1_intr_map;
    volatile intmtx_core0_systimer_target2_intr_map_reg_t core0_systimer_target2_intr_map;
    volatile intmtx_core0_apb_adc_intr_map_reg_t core0_apb_adc_intr_map;
    volatile intmtx_core0_pwm_intr_map_reg_t core0_pwm_intr_map;
    volatile intmtx_core0_pcnt_intr_map_reg_t core0_pcnt_intr_map;
    volatile intmtx_core0_parl_io_tx_intr_map_reg_t core0_parl_io_tx_intr_map;
    volatile intmtx_core0_parl_io_rx_intr_map_reg_t core0_parl_io_rx_intr_map;
    volatile intmtx_core0_dma_in_ch0_intr_map_reg_t core0_dma_in_ch0_intr_map;
    volatile intmtx_core0_dma_in_ch1_intr_map_reg_t core0_dma_in_ch1_intr_map;
    volatile intmtx_core0_dma_in_ch2_intr_map_reg_t core0_dma_in_ch2_intr_map;
    volatile intmtx_core0_dma_out_ch0_intr_map_reg_t core0_dma_out_ch0_intr_map;
    volatile intmtx_core0_dma_out_ch1_intr_map_reg_t core0_dma_out_ch1_intr_map;
    volatile intmtx_core0_dma_out_ch2_intr_map_reg_t core0_dma_out_ch2_intr_map;
    volatile intmtx_core0_gpspi2_intr_map_reg_t core0_gpspi2_intr_map;
    volatile intmtx_core0_aes_intr_map_reg_t core0_aes_intr_map;
    volatile intmtx_core0_sha_intr_map_reg_t core0_sha_intr_map;
    volatile intmtx_core0_rsa_intr_map_reg_t core0_rsa_intr_map;
    volatile intmtx_core0_ecc_intr_map_reg_t core0_ecc_intr_map;
    volatile intmtx_core0_ecdsa_intr_map_reg_t core0_ecdsa_intr_map;
    volatile intmtx_core0_int_status_reg_0_reg_t core0_int_status_reg_0;
    volatile intmtx_core0_int_status_reg_1_reg_t core0_int_status_reg_1;
    volatile intmtx_core0_int_status_reg_2_reg_t core0_int_status_reg_2;
    volatile intmtx_core0_clock_gate_reg_t core0_clock_gate;
    uint32_t reserved_114[442];
    volatile intmtx_core0_interrupt_reg_date_reg_t core0_interrupt_reg_date;
} interrupt_matrix_dev_t;

extern interrupt_matrix_dev_t INTMTX;

#ifndef __cplusplus
_Static_assert(sizeof(interrupt_matrix_dev_t) == 0x800, "Invalid size of interrupt_matrix_dev_t structure");
#endif

#ifdef __cplusplus
}
#endif
