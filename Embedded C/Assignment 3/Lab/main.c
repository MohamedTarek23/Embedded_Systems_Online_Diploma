#define RCC_base 0x40021000
#define GPIO_PA 0x40010800
#define RCC_APB2ENR *(volatile unsigned int*)(RCC_base + 0x18)
#define GPIO_PA_CRH *(volatile unsigned int*)(GPIO_PA + 0x04)
#define GPIO_PA_ODR *(volatile unsigned int*)(GPIO_PA + 0x0C)

#define RCC_IOPAEN (1<<2)
extern void NMI_Handler(void)
{
	
}
extern void Bus_Fault(void)
{
	
}

typedef union {
	volatile unsigned int all_fields;
	struct {
		volatile unsigned int reserved:13;
		volatile unsigned int P_13:1;
	} Pin;
} R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIO_PA + 0x0C);
unsigned char g_variables[3] = {1,2,3};
unsigned char const const_variables[3]={1,2,3};
int main(void)
{
	int i;
	RCC_APB2ENR |= RCC_IOPAEN ;
	GPIO_PA_CRH &= 0xFF0FFFFF;
	GPIO_PA_CRH |= 0x00200000;
	
	while(1)
	{
		R_ODR->Pin.P_13=0;
		for(i=0 ; i<5000 ; i++);
		R_ODR->Pin.P_13=1;
		for(i=0 ; i<5000 ; i++);
	}
}