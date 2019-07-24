#include "stm32f4xx.h"
#include "usart1.h"
#include "stdio.h"


int main(void)
{
/****************** 变量声明 **************************/
	uint8_t *str = (uint8_t *)"from U2";
	
/****************** 硬件初始化 ************************/
	Usart1_Init(115200);
	Usart2_Init(115200);
	Usart3_Init(115200);
	
/****************** 测试用例 **************************/
#if 1
	/*
	*		用例号:	1
	*	用例说明:	1,初始化成功输出字符串“Init is sussful\r\n”
	*						2,USART2发送字符串"from U2"到USART3；前提USART3与USART2硬件连接
	*						3,USART3收到USART2的字符串"from U2"，然后通过USART1发送到CP显示
	*	测试结果:	true
	*/
	printf("Init is sussful\r\n");
	Receive_String(str, USART2);
#endif
	while(1){
		
	}

	
	
}
