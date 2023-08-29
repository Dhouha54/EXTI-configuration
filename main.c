 /**
  ******************************************************************************
  * @file    EXTI/main.c 
  * @author  CSF/STM32 Training/ Halim Kacem
  * @version V1.0.0
  * @date    04/01/2011
  * @brief   Main program body
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2010 STMicroelectronics</center></h2>
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"


/** @addtogroup Examples
  * @{
  */




/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
	
	
	*/
	
int main(void)
{

   GPIO_InitTypeDef GPIO_InitStructure;
  EXTI_InitTypeDef EXTI_InitStructure;
  NVIC_InitTypeDef NVIC_InitStructure;
  
  /*!< At this stage the microcontroller clock setting is already configured, 
       this is done through SystemInit() function which is called from startup
       file (startup_stm32f10x_xx.s) before to branch to application main.
       To reconfigure the default setting of SystemInit() function, refer to
       system_stm32f10x.c file
     */     
       
  /* Create function called "void AllGPIO_Ini(void)" to Configure all unused GPIO port pins in Analog Input mode (floating input
     trigger OFF), this will reduce the power consumption and increase the device
     immunity against EMI/EMC *************************************************/
  
  //AllGPIO_Ini();
 // attribute clock to all needed peripheral 
 //  
RCC_APB2PeriphClockCmd(.................|................., ...................);
 
  /* Configure pin led as output mode */
       GPIO_InitStructure.GPIO_Pin= .................|...................  ;             /*!< Specifies the GPIO pins to be configured.
                                      This parameter can be any value of @ref GPIO_pins_define */

      GPIO_InitStructure.GPIO_Speed= GPIO_Speed_50MHz;  /*!< Specifies the speed for the selected pins.
                                      This parameter can be a value of @ref GPIOSpeed_TypeDef */

      GPIO_InitStructure.GPIO_Mode= ...................;
  GPIO_Init(GPIOC,&GPIO_InitStructure);
  
	/* Configure PA0 as input floating mode */
  
	      GPIO_InitStructure.GPIO_Pin= ................;             

      GPIO_InitStructure.GPIO_Mode= .............;
 GPIO_Init(..........,&GPIO_InitStructure);
    /* Connect Button EXTI Line to Button GPIO Pin */
    GPIO_EXTILineConfig(............, ..............);

    /* Configure Button EXTI line */
    EXTI_InitStructure.EXTI_Line = ............;
    EXTI_InitStructure.EXTI_Mode = ............;
    EXTI_InitStructure.EXTI_Trigger = .............;  
    EXTI_InitStructure.EXTI_LineCmd = .......;
    EXTI_Init(&EXTI_InitStructure);

    /* Enable and set Button EXTI Interrupt to the lowest priority */
    NVIC_InitStructure.NVIC_IRQChannel = ......     ;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0x0F;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0x0F;
    NVIC_InitStructure.NVIC_IRQChannelCmd = .......;
    NVIC_Init(&NVIC_InitStructure); 


       
  while (1)
  {
		GPIO_SetBits(......., ........);
  }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */ 

/**
  * @}
  */ 

/******************* (C) COPYRIGHT 2010 STMicroelectronics *****END OF FILE****/
