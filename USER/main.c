#include "stm32f4xx.h"
#include "usart1.h"
#include "stdio.h"


int main(void)
{
/****************** �������� **************************/
	uint8_t *str = (uint8_t *)"from U2";
	
/****************** Ӳ����ʼ�� ************************/
	Usart1_Init(115200);
	Usart2_Init(115200);
	Usart3_Init(115200);
	
/****************** �������� **************************/
#if 1
	/*
	*		������:	1
	*	����˵��:	1,��ʼ���ɹ�����ַ�����Init is sussful\r\n��
	*						2,USART2�����ַ���"from U2"��USART3��ǰ��USART3��USART2Ӳ������
	*						3,USART3�յ�USART2���ַ���"from U2"��Ȼ��ͨ��USART1���͵�CP��ʾ
	*	���Խ��:	true
	*/
	printf("Init is sussful\r\n");
	Receive_String(str, USART2);
#endif
	while(1){
		
	}

	
	
}
