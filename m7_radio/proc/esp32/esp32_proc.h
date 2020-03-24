/************************************************************************************
**                                                                                 **
**                             mcHF Pro QRP Transceiver                            **
**                         Krassi Atanassov - M0NKA 2012-2020                      **
**                            mail: djchrismarc@gmail.com                          **
**                                 twitter: @bph_co                                **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:                                                                       **
**          The mcHF project is released for radio amateurs experimentation,       **
**          non-commercial use only. All source files under GPL-3.0, unless        **
**          third party drivers specifies otherwise. Thank you!                    **
************************************************************************************/

#ifndef __ESP32_PROC_H
#define __ESP32_PROC_H

#ifdef ESP32_UART_TASK

/* Definition for USARTx's DMA */
#define USARTx_TX_DMA_STREAM             DMA2_Stream7
#define USARTx_RX_DMA_STREAM             DMA2_Stream1

/* Definition for USARTx's DMA Request */
#define USARTx_TX_DMA_REQUEST            DMA_REQUEST_UART8_TX
#define USARTx_RX_DMA_REQUEST            DMA_REQUEST_UART8_RX

/* Definition for USARTx's NVIC */
#define USARTx_DMA_TX_IRQn               DMA2_Stream7_IRQn
#define USARTx_DMA_RX_IRQn               DMA2_Stream1_IRQn

/* Definition for USARTx's NVIC */
#define USARTx_IRQn                      UART8_IRQn

void esp32_proc_init(void);
void esp32_proc_task(void const *arg);

#endif

#endif