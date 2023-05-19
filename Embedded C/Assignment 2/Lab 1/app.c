#include "uart.h"
#include "stdio.h"
unsigned char string_buffer[100]="learn-in-depth:<Mohamed>";
void main(void)
{
	Uart_send_string(string_buffer);
}
