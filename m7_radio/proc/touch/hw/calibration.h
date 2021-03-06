/**
  ******************************************************************************
  * @file    calibration.h
  * @author  MCD Application Team
  * @brief   Header for calibration file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
  

#ifndef CALIBRATION_H
#define CALIBRATION_H

#include "main.h"

typedef union
{
  struct
  {
    uint32_t     A1 : 15;
    uint32_t     B1 : 16;
    uint32_t     Reserved : 1;
  }b;
  uint32_t d32;
}CALIBRATION_Data1Typedef;

typedef union
{
  struct
  {
    uint32_t      A2 : 15;
    uint32_t      B2 : 16;
    uint32_t      IsCalibrated : 1;
  }b;
  uint32_t d32;

} CALIBRATION_Data2Typedef;

void     TouchScreen_GetValue(void);
uint16_t TouchScreen_Get_Calibrated_X(uint16_t x);
uint16_t TouchScreen_Get_Calibrated_Y(uint16_t y);
uint8_t  TouchScreen_IsCalibrationDone(void);

#endif /* CALIBRATION_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
