#include <avr/io.h>  
#include <util/delay.h>  
  
int main(void)  
{  
    PORTB = 0x00;           // PC 口的第 0/7 位输出 "0"/"1", LED1 和 LED2 都亮.  
    DDRB  = 0xFF;           // 定义 PC 口的第 0 和 7 位为输出方式  
    _delay_ms(2000);        // 开始时两个 LED 都要亮, 持续 2s 后进入循环.  
      
    while(1)  
    {  
        _delay_ms(200);     // 库函数 ms 延时函数, 0.2s      
        PORTB = ~PORTB;     // PC 口第 0/7 位取反后输出  
    }  
      
    return 0;  
}  
