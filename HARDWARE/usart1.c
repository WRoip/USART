#include "usart1.h"

void Usart1_Init(uint32_t BaudRate)
{
	
	GPIO_InitTypeDef				GPIO_InitStruct;
	USART_InitTypeDef				USART_InitStruct;
	NVIC_InitTypeDef				NVIC_InitStruct;
	
	//����USART1��GPIOA��ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	
	//GPIOA9,10�˿ڸ���USART1
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource9, GPIO_AF_USART1);
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource10, GPIO_AF_USART1);
	
	//��ʼ��GPIOA9,10�˿�
	GPIO_InitStruct.GPIO_Mode		= GPIO_Mode_AF;
	GPIO_InitStruct.GPIO_OType	= GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Pin		= GPIO_Pin_9 | GPIO_Pin_10;
	GPIO_InitStruct.GPIO_PuPd		= GPIO_PuPd_UP;
	GPIO_InitStruct.GPIO_Speed	= GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStruct);
	
	//��ʼ��USART1
	USART_InitStruct.USART_BaudRate							= BaudRate;
	USART_InitStruct.USART_HardwareFlowControl	= USART_HardwareFlowControl_None;//�ر�Ӳ������;
	USART_InitStruct.USART_Mode									= USART_Mode_Rx | USART_Mode_Tx;
	USART_InitStruct.USART_Parity								= USART_Parity_No;
	USART_InitStruct.USART_StopBits							= USART_StopBits_1;
	USART_InitStruct.USART_WordLength						= USART_WordLength_8b;
	USART_Init(USART1, &USART_InitStruct);
	
	//����USART1�ж��¼�
	USART_ITConfig(USART1, USART_IT_RXNE, ENABLE);
	
	//�����ж�
	NVIC_InitStruct.NVIC_IRQChannel										= USART1_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd								= ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority				= 0;
	NVIC_Init(&NVIC_InitStruct);
	
	//����USART1
	USART_Cmd(USART1, ENABLE);
}

void Usart2_Init(uint32_t BaudRate)
{
	
	GPIO_InitTypeDef				GPIO_InitStruct;
	USART_InitTypeDef				USART_InitStruct;
	NVIC_InitTypeDef				NVIC_InitStruct;
	
	//����USART2��GPIOA��ʱ��
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	
	//GPIOA2,3�˿ڸ���USART2
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource2, GPIO_AF_USART2);
	GPIO_PinAFConfig(GPIOA, GPIO_PinSource3, GPIO_AF_USART2);
	
	//��ʼ��GPIOA2,3�˿�
	GPIO_InitStruct.GPIO_Mode		= GPIO_Mode_AF;
	GPIO_InitStruct.GPIO_OType	= GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Pin		= GPIO_Pin_2 | GPIO_Pin_3;
	GPIO_InitStruct.GPIO_PuPd		= GPIO_PuPd_UP;
	GPIO_InitStruct.GPIO_Speed	= GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStruct);
	
	//��ʼ��USART2
	USART_InitStruct.USART_BaudRate							= BaudRate;
	USART_InitStruct.USART_HardwareFlowControl	= USART_HardwareFlowControl_None;//�ر�Ӳ������;
	USART_InitStruct.USART_Mode									= USART_Mode_Rx | USART_Mode_Tx;
	USART_InitStruct.USART_Parity								= USART_Parity_No;
	USART_InitStruct.USART_StopBits							= USART_StopBits_1;
	USART_InitStruct.USART_WordLength						= USART_WordLength_8b;
	USART_Init(USART2, &USART_InitStruct);
	
	//����USART2�ж��¼�
	USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);
	
	//�����ж�
	NVIC_InitStruct.NVIC_IRQChannel										= USART2_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd								= ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority				= 0;
	NVIC_Init(&NVIC_InitStruct);
	
	//����USART2
	USART_Cmd(USART2, ENABLE);
}

void Usart3_Init(uint32_t BaudRate)
{
	
	GPIO_InitTypeDef				GPIO_InitStruct;
	USART_InitTypeDef				USART_InitStruct;
	NVIC_InitTypeDef				NVIC_InitStruct;
	
	//����USART3��GPIOB��ʱ��
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	
	//GPIOB10,11�˿ڸ���USART3
	GPIO_PinAFConfig(GPIOB, GPIO_PinSource10, GPIO_AF_USART3);
	GPIO_PinAFConfig(GPIOB, GPIO_PinSource11, GPIO_AF_USART3);
	
	//��ʼ��GPIOA10,11�˿�
	GPIO_InitStruct.GPIO_Mode		= GPIO_Mode_AF;
	GPIO_InitStruct.GPIO_OType	= GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Pin		= GPIO_Pin_10 | GPIO_Pin_11;
	GPIO_InitStruct.GPIO_PuPd		= GPIO_PuPd_UP;
	GPIO_InitStruct.GPIO_Speed	= GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStruct);
	
	//��ʼ��USART3
	USART_InitStruct.USART_BaudRate							= BaudRate;
	USART_InitStruct.USART_HardwareFlowControl	= USART_HardwareFlowControl_None;//�ر�Ӳ������;
	USART_InitStruct.USART_Mode									= USART_Mode_Rx | USART_Mode_Tx;
	USART_InitStruct.USART_Parity								= USART_Parity_No;
	USART_InitStruct.USART_StopBits							= USART_StopBits_1;
	USART_InitStruct.USART_WordLength						= USART_WordLength_8b;
	USART_Init(USART3, &USART_InitStruct);
	
	//����USART3�ж��¼�
	USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
	
	//�����ж�
	NVIC_InitStruct.NVIC_IRQChannel										= USART3_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd								= ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority				= 0;
	NVIC_Init(&NVIC_InitStruct);
	
	//����USART3
	USART_Cmd(USART3, ENABLE);
}

//�жϴ�������
void USART1_IRQHandler(void)
{
	uint8_t *str;
	uint8_t c[10];
	int i = 0;
	str = &c[0];

	if((USART_GetFlagStatus(USART1, USART_FLAG_RXNE)) != 0){
		for(i = 0; i < 10; i++)str[i] = 0;
		Send_String(str, USART1);
		Receive_String(str, USART1);
		
	}
}

//�жϴ�������
void USART2_IRQHandler(void)
{
	uint8_t *str = (uint8_t *)"from U2";
	int i = 0;

	if((USART_GetFlagStatus(USART2, USART_FLAG_RXNE)) != 0){
		for(i = 0; i < 10; i++)str[i] = 0;
		Send_String(str, USART2);
		Receive_String(str, USART2);
		
	}
}

//�жϴ�������
void USART3_IRQHandler(void)
{
	uint8_t *str;
	uint8_t c[10];
	int i = 0;
	str = &c[0];

	if((USART_GetFlagStatus(USART3, USART_FLAG_RXNE)) != 0){
		for(i = 0; i < 10; i++)str[i] = 0;
		Send_String(str, USART3);
		Receive_String(str, USART1);
		
	}
}

void Receive_String(uint8_t *str , USART_TypeDef* USARTx)
{
	int i = 0;
	while(str[i] != '\0'){
		USART_SendData(USARTx, str[i]);
		while(((USARTx->SR) & (0x1 << 7)) == 0);
		i++;
	}
}



void Send_String(uint8_t *str, USART_TypeDef* USARTx)
{
	int i = 0;
	while((USART_GetFlagStatus(USARTx, USART_FLAG_RXNE)) != 0){
		str[i] = USART_ReceiveData(USARTx);
		i++;
	}
}
