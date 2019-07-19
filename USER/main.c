#include "stm32f4xx.h"
#include "usart1.h"
#include "stdio.h"


int main(void)
{
	uint8_t *str = (uint8_t *)"from U2";
	
	Usart1_Init(115200);
	Usart2_Init(115200);
	Usart3_Init(115200);
	
	printf("Init is sussful\r\n");
	Receive_String(str, USART2);
	
	while(1){
		
	}
	
}
