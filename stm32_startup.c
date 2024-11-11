#include <stdint.h>

#define SRAM_START      0x20000000U
#define SRAM_END        0x2000FFFFU

extern uint32_t _etext;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;
extern uint32_t _la_data;

#define STACK_START     SRAM_END

int main(void);
int _libc_init_array(void);

void Reset_handler();
void NMI_handler()              __attribute__((weak,alias("Default_handler"))) ;
void HardFault_Handler()        __attribute__((weak,alias("Default_handler")));
void MemManage_Handler()        __attribute__((weak,alias("Default_handler")));
void BusFault_Handler()         __attribute__((weak,alias("Default_handler")));
void UsageFault_Handler()       __attribute__((weak,alias("Default_handler")));
void PendSV_Handler()           __attribute__((weak,alias("Default_handler")));
void SysTick_Handler()          __attribute__((weak,alias("Default_handler")));
void WWDG_Handler()             __attribute__((weak,alias("Default_handler")));
void PVD_PVM_Handler()          __attribute__((weak,alias("Default_handler")));
void RTC_Handler()              __attribute__((weak,alias("Default_handler")));
void RTC_WKUP_Handler()         __attribute__((weak,alias("Default_handler")));
void FLASH_Handler()            __attribute__((weak,alias("Default_handler")));
void RCC_Handler()              __attribute__((weak,alias("Default_handler")));
void EXTI0_Handler()            __attribute__((weak,alias("Default_handler")));
void EXTI1_Handler()            __attribute__((weak,alias("Default_handler")));
void EXTI2_Handler()            __attribute__((weak,alias("Default_handler")));
void EXTI3_Handler()            __attribute__((weak,alias("Default_handler")));
void EXTI4_Handler()            __attribute__((weak,alias("Default_handler")));
void DMA1_CH1_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA1_CH2_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA1_CH3_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA1_CH4_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA1_CH5_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA1_CH6_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA1_CH7_Handler()         __attribute__((weak,alias("Default_handler")));
void ADC1_2_Handler()           __attribute__((weak,alias("Default_handler")));
void USB_HP_Handler()           __attribute__((weak,alias("Default_handler")));
void USB_LP_Handler()           __attribute__((weak,alias("Default_handler")));
void fdcan1_intr1_it_Handler()  __attribute__((weak,alias("Default_handler")));
void fdcan1_intr0_it_Handler()  __attribute__((weak,alias("Default_handler")));
void EXTI9_5_Handler()          __attribute__((weak,alias("Default_handler")));
void TIM1_BRK_Handler()         __attribute__((weak,alias("Default_handler")));
void TIM1_UP_Handler()          __attribute__((weak,alias("Default_handler")));
void TIM1_TRG_COM_Handler()     __attribute__((weak,alias("Default_handler")));
void TIM1_CC_Handler()          __attribute__((weak,alias("Default_handler")));
void TIM2_Handler()             __attribute__((weak,alias("Default_handler")));
void TIM3_Handler()             __attribute__((weak,alias("Default_handler")));
void TIM4_Handler()             __attribute__((weak,alias("Default_handler")));
void I2C1_EV_Handler()          __attribute__((weak,alias("Default_handler")));
void I2C1_ER_Handler()          __attribute__((weak,alias("Default_handler")));
void I2C2_EV_Handler()          __attribute__((weak,alias("Default_handler")));
void I2C2_ER_Handler()          __attribute__((weak,alias("Default_handler")));
void SPI1_Handler()             __attribute__((weak,alias("Default_handler")));
void SPI2_Handler()             __attribute__((weak,alias("Default_handler")));
void USART1_Handler()           __attribute__((weak,alias("Default_handler")));
void USART2_Handler()           __attribute__((weak,alias("Default_handler")));
void USART3_Handler()           __attribute__((weak,alias("Default_handler")));
void EXTI15_10_Handler()        __attribute__((weak,alias("Default_handler")));
void RTC_ALARM_Handler()        __attribute__((weak,alias("Default_handler")));
void USBWakeUP_Handler()        __attribute__((weak,alias("Default_handler")));
void TIM8_BRK_Handler()         __attribute__((weak,alias("Default_handler")));
void TIM8_UP_Handler()          __attribute__((weak,alias("Default_handler")));
void TIM8_TRG_COM_Handler()     __attribute__((weak,alias("Default_handler")));
void TIM8_CC_Handler()          __attribute__((weak,alias("Default_handler")));
void ADC3_Handler()             __attribute__((weak,alias("Default_handler")));
void FSMC_Handler()             __attribute__((weak,alias("Default_handler")));
void LPTIM1_Handler()           __attribute__((weak,alias("Default_handler")));
void TIM5_Handler()             __attribute__((weak,alias("Default_handler")));
void SPI3_Handler()             __attribute__((weak,alias("Default_handler")));
void UART4_Handler()            __attribute__((weak,alias("Default_handler")));
void UART5_Handler()            __attribute__((weak,alias("Default_handler")));
void TIM6_DACUNDER_Handler()    __attribute__((weak,alias("Default_handler")));
void TIM7_DACUNDER_Handler()    __attribute__((weak,alias("Default_handler")));
void DMA2_CH1_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA2_CH2_Handler()         __attribute__((weak,alias("Default_handler"))); 
void DMA2_CH3_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA2_CH4_Handler()         __attribute__((weak,alias("Default_handler")));
void DMA2_CH5_Handler()         __attribute__((weak,alias("Default_handler")));
void ADC4_Handler()             __attribute__((weak,alias("Default_handler")));
void ADC5_Handler()             __attribute__((weak,alias("Default_handler")));
void UCPD1_global_interrupt_Handler()   __attribute__((weak,alias("Default_handler")));
void COMP1_2_3_Handler()        __attribute__((weak,alias("Default_handler")));
void COMP4_5_6_Handler()        __attribute__((weak,alias("Default_handler")));
void COMP7_Handler()            __attribute__((weak,alias("Default_handler")));
void HRTIM_Master_IRQn_Handler()    __attribute__((weak,alias("Default_handler")));
void HRTIM_TIMA_IRQn_Handler()      __attribute__((weak,alias("Default_handler")));
void HRTIM_TIMB_IRQn_Handler()      __attribute__((weak,alias("Default_handler"))); 
void HRTIM_TIMC_IRQn_Handler()      __attribute__((weak,alias("Default_handler")));
void HRTIM_TIMD_IRQn_Handler()      __attribute__((weak,alias("Default_handler"))); 
void HRTIM_TIME_IRQn_Handler()      __attribute__((weak,alias("Default_handler")));
void HRTIM_TIM_FLT_IRQn_Handler()   __attribute__((weak,alias("Default_handler")));
void HRTIM_TIMF_IRQn_Handler()      __attribute__((weak,alias("Default_handler")));
void CRS_Handler()                  __attribute__((weak,alias("Default_handler")));
void SAI_Hander()                   __attribute__((weak,alias("Default_handler")));
void TIM20_BRK_Handler()            __attribute__((weak,alias("Default_handler")));
void TIM20_UP_Handler()             __attribute__((weak,alias("Default_handler")));
void TIM20_TRG_COM_Handler()        __attribute__((weak,alias("Default_handler")));
void TIM20_CC_Handler()             __attribute__((weak,alias("Default_handler")));
void FPU_Handler()                  __attribute__((weak,alias("Default_handler")));
void I2C4_EV_Handler()              __attribute__((weak,alias("Default_handler")));
void I2C4_ER_Handler()              __attribute__((weak,alias("Default_handler")));
void SPI4_Handler()                 __attribute__((weak,alias("Default_handler")));
void AES_Handler()                  __attribute__((weak,alias("Default_handler")));
void FDCAN2_intr0_Handler()         __attribute__((weak,alias("Default_handler")));
void FDCAN2_intr1_Handler()         __attribute__((weak,alias("Default_handler")));
void FDCAN3_intr0_Handler()         __attribute__((weak,alias("Default_handler")));
void FDCAN3_intr1_Handler()         __attribute__((weak,alias("Default_handler")));
void RNG_Handler()                  __attribute__((weak,alias("Default_handler")));
void LPUART_Handler()               __attribute__((weak,alias("Default_handler")));
void I2C3_EV_Handler()              __attribute__((weak,alias("Default_handler"))); 
void I2C3_ER_Handler()              __attribute__((weak,alias("Default_handler")));
void DMAMUX_OVR_Handler()           __attribute__((weak,alias("Default_handler")));
void QUADSPI_Handler()              __attribute__((weak,alias("Default_handler")));
void DMA1_CH8_Handler()             __attribute__((weak,alias("Default_handler")));
void DMA2_CH6_Handler()             __attribute__((weak,alias("Default_handler")));
void DMA2_CH7_Handler()             __attribute__((weak,alias("Default_handler")));
void DMA2_CH8_Handler()             __attribute__((weak,alias("Default_handler")));
void Cordic_Handler()               __attribute__((weak,alias("Default_handler")));
void FMAC_Handler()                 __attribute__((weak,alias("Default_handler")));

uint32_t vectors[] __attribute__ ((section (".isr_vector")))={
    STACK_START,
    (uint32_t)&Reset_handler,
    (uint32_t)&NMI_handler,  
    (uint32_t)&HardFault_Handler,
    (uint32_t)&MemManage_Handler,
    (uint32_t)&BusFault_Handler,
    (uint32_t)&UsageFault_Handler,
    0,
    0,
    0,
    0,
    (uint32_t)&PendSV_Handler,
    (uint32_t)&SysTick_Handler,
    (uint32_t)&WWDG_Handler,
    (uint32_t)&PVD_PVM_Handler,
    (uint32_t)&RTC_Handler,
    (uint32_t)&RTC_WKUP_Handler,
    (uint32_t)&FLASH_Handler,
    (uint32_t)&RCC_Handler,
    (uint32_t)&EXTI0_Handler,
    (uint32_t)&EXTI1_Handler,
    (uint32_t)&EXTI2_Handler,
    (uint32_t)&EXTI3_Handler,
    (uint32_t)&EXTI4_Handler,
    (uint32_t)&DMA1_CH1_Handler,
    (uint32_t)&DMA1_CH2_Handler,
    (uint32_t)&DMA1_CH3_Handler,
    (uint32_t)&DMA1_CH4_Handler,
    (uint32_t)&DMA1_CH5_Handler,
    (uint32_t)&DMA1_CH6_Handler,
    (uint32_t)&DMA1_CH7_Handler,
    (uint32_t)&ADC1_2_Handler,
    (uint32_t)&USB_HP_Handler,
    (uint32_t)&USB_LP_Handler,
    (uint32_t)&fdcan1_intr1_it_Handler,
    (uint32_t)&fdcan1_intr0_it_Handler,
    (uint32_t)&EXTI9_5_Handler,
    (uint32_t)&TIM1_BRK_Handler,
    (uint32_t)&TIM1_UP_Handler,
    (uint32_t)&TIM1_TRG_COM_Handler,
    (uint32_t)&TIM1_CC_Handler,
    (uint32_t)&TIM2_Handler,
    (uint32_t)&TIM3_Handler,
    (uint32_t)&TIM4_Handler,
    (uint32_t)&I2C1_EV_Handler,
    (uint32_t)&I2C1_ER_Handler,
    (uint32_t)&I2C2_EV_Handler,
    (uint32_t)&I2C2_ER_Handler,
    (uint32_t)&SPI1_Handler,
    (uint32_t)&SPI2_Handler,
    (uint32_t)&USART1_Handler,
    (uint32_t)&USART2_Handler,
    (uint32_t)&USART3_Handler,
    (uint32_t)&EXTI15_10_Handler,
    (uint32_t)&RTC_ALARM_Handler,
    (uint32_t)&USBWakeUP_Handler,
    (uint32_t)&TIM8_BRK_Handler,
    (uint32_t)&TIM8_UP_Handler,
    (uint32_t)&TIM8_TRG_COM_Handler,
    (uint32_t)&TIM8_CC_Handler,
    (uint32_t)&ADC3_Handler,
    (uint32_t)&FSMC_Handler,
    (uint32_t)&LPTIM1_Handler,
    (uint32_t)&TIM5_Handler,
    (uint32_t)&SPI3_Handler,
    (uint32_t)&UART4_Handler,
    (uint32_t)&UART5_Handler,
    (uint32_t)&TIM6_DACUNDER_Handler,
    (uint32_t)&TIM7_DACUNDER_Handler,
    (uint32_t)&DMA2_CH1_Handler,
    (uint32_t)&DMA2_CH2_Handler,
    (uint32_t)&DMA2_CH3_Handler,
    (uint32_t)&DMA2_CH4_Handler,
    (uint32_t)&DMA2_CH5_Handler,
    (uint32_t)&ADC4_Handler,
    (uint32_t)&ADC5_Handler,
    (uint32_t)&UCPD1_global_interrupt_Handler,
    (uint32_t)&COMP1_2_3_Handler,
    (uint32_t)&COMP4_5_6_Handler,
    (uint32_t)&COMP7_Handler,
    (uint32_t)&HRTIM_Master_IRQn_Handler,
    (uint32_t)&HRTIM_TIMA_IRQn_Handler,
    (uint32_t)&HRTIM_TIMB_IRQn_Handler,
    (uint32_t)&HRTIM_TIMC_IRQn_Handler,
    (uint32_t)&HRTIM_TIMD_IRQn_Handler,
    (uint32_t)&HRTIM_TIME_IRQn_Handler,
    (uint32_t)&HRTIM_TIM_FLT_IRQn_Handler,
    (uint32_t)&HRTIM_TIMF_IRQn_Handler,
    (uint32_t)&CRS_Handler,
    (uint32_t)&SAI_Hander,
    (uint32_t)&TIM20_BRK_Handler,
    (uint32_t)&TIM20_UP_Handler,
    (uint32_t)&TIM20_TRG_COM_Handler,
    (uint32_t)&TIM20_CC_Handler,
    (uint32_t)&FPU_Handler,
    (uint32_t)&I2C4_EV_Handler,
    (uint32_t)&I2C4_ER_Handler,
    (uint32_t)&SPI4_Handler,
    (uint32_t)&AES_Handler,
    (uint32_t)&FDCAN2_intr0_Handler,
    (uint32_t)&FDCAN2_intr1_Handler,
    (uint32_t)&FDCAN3_intr0_Handler,
    (uint32_t)&FDCAN3_intr1_Handler,
    (uint32_t)&RNG_Handler,
    (uint32_t)&LPUART_Handler,
    (uint32_t)&I2C3_EV_Handler,
    (uint32_t)&I2C3_ER_Handler,
    (uint32_t)&DMAMUX_OVR_Handler,
    (uint32_t)&QUADSPI_Handler,
    (uint32_t)&DMA1_CH8_Handler,
    (uint32_t)&DMA2_CH6_Handler,
    (uint32_t)&DMA2_CH7_Handler,
    (uint32_t)&DMA2_CH8_Handler,
    (uint32_t)&Cordic_Handler,
    (uint32_t)&FMAC_Handler
};

int _libc_init_array(void)
{
    return 0;
}

void Reset_handler()
{
    // Copy .data section to SRAM
    uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;

    uint8_t *pDST = (uint8_t*)&_sdata;
    uint8_t *pSrc = (uint8_t*)&_la_data;
    for (uint32_t i = 0; i < size; i++)
    {
        *pDST++ = *pSrc++;
    }

    // Initialize .bss section with 0 in SRAM
    size = (uint32_t)&_ebss - (uint32_t)&_sbss;
    pDST = (uint8_t*)&_sbss;  // Add & for pointer type casting
    for (uint32_t i = 0; i < size; i++)
    {
        *pDST++ = 0;  // Increment pDST to cover all bytes
    }

    _libc_init_array();
    // Call main function
    main();
}


void Default_handler()
{
    while (1)
    {

    }    
}

