#ifndef _USART1_H_
#define _USART1_H_

/************************* ͷ�ļ� **************************/
#include "stm32f4xx.h"
#include "stdio.h"

/************************* �궨�� **************************/

/************************ �������� *************************/
 /*
  * ��  �ܣ�Usart1��ʼ��
  * ��  ����void
  * ����ֵ��void
  *
 */
void Usart1_Init(uint32_t n);

/*
  * ��  �ܣ�Usart2��ʼ��
  * ��  ����void
  * ����ֵ��void
  *
 */
void Usart2_Init(uint32_t n);

/*
  * ��  �ܣ�Usart3��ʼ��
  * ��  ����void
  * ����ֵ��void
  *
 */
void Usart3_Init(uint32_t n);

 /*
  * ��  �ܣ������ַ���
  * ��  ����uint8_t *str
  * ����ֵ��void
  *
 */
void Receive_String(uint8_t *str, USART_TypeDef* USARTx);

 /*
  * ��  �ܣ������ַ���
  * ��  ����uint8_t *str
  * ����ֵ��void
  *
 */
void Send_String(uint8_t *str, USART_TypeDef* USARTx);

#endif
