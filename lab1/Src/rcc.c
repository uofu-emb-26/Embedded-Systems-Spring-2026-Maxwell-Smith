#include "rcc.h"


void HAL_RCC_GPIOC_CLK_Enable(void) 
{

    #ifdef RCC_AHBENR_GPIOC_EN
        RCC->AHBENR |= RCC_AHBENR_GPIOC_EN;
    #elif defined(RCC_AHBENR_IOPC_EN)
        RCC->AHBENR |= RCC_AHBENR_IOPC_EN;
    #else 
        RCC->AHBENR |= (1u << 19u);
    #endif
        (void)RCC->AHBENR;

}

void HAL_RCC_GPIOC_CLK_Enable(void)
{
    #ifdef RCC_AHBENR_GPIOA_EN
        RCC->AHBENR |= RCC_AHBENR_GPIOA_EN;
    #elif defined(RCC_AHBENR_IOPA_EN)
        RCC->AHBENR |= RCC_AHBENR_IOPA_EN;
    #else
        RCC->AHBENR |= (1u << 17u);
    #endif
        (void)RCC->AHBENR;
}