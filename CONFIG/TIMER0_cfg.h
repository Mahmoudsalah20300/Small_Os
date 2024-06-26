/*****************************************************************
 * FILE DESCRIPTION:
----------------------------------------------------------------
 *  file    : TIMER0_cfg.h
 *  details : Header file for configuration TIMER0 Driver.
 ******************************************************************/

#ifndef TIMER0_CFG_H_
#define TIMER0_CFG_H_

/******************************************
  GLOBAL CONSTANT MACROS
 *******************************************/
#define FCPU_CLOCK     16000000UL

/******************************************
  Global Data TYPES AND STRUCTURES
 *******************************************/
/*Struct for timer0 initialization configurations*/
typedef struct
{
	TIMER0_ModeType Mode;  //mode of TIMER0
	TIMER0_OCState OC0_Action; //action of OC0 pin on interrupt
	TIMER0_PrescalerType Prescaler;
}TIMER0_ConfigType;
#endif /* TIMER0_CFG_H_ */
