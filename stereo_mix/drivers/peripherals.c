#include "peripherals.h"

ADC_HandleTypeDef hadc1 = { .Instance = ADC1 };
DMA_HandleTypeDef hdma1_channel1 = { .Instance = DMA1_Channel1 };
SPI_HandleTypeDef hspi1 = { .Instance = SPI1 };
TIM_HandleTypeDef htim3 = { .Instance = TIM3 };

void DMA1_Channel1_IRQHandler(void)
{
  HAL_DMA_IRQHandler(&hdma1_channel1);
}
void ADC1_IRQHandler(void)
{
  HAL_ADC_IRQHandler(&hadc1);
}
void TIM3_IRQHandler()
{
  HAL_TIM_IRQHandler(&htim3);
}