#include "stm32f4xx.h"
#include "delay.h"//��ʱ�������ڵ�ͷ�ļ�

#include "DIP.h"
#include "led.h"
	


int main(void)
{ 
	LED_Init();		       //��ʼ��LED�˿�
	DIP_Init();
	delay_init(168);     //��ʼ����ʱ����

	while(1)
	{
		/*��ˮ����ʾ*/
		LED0=DIP0;
		LED1=DIP1;
		LED2=DIP2;
		LED3=DIP3;
		LED4=DIP4;
		LED5=DIP5;
		LED6=DIP6;
		LED7=DIP7;
 	}
}

