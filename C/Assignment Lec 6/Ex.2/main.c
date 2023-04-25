/*
 * main.c
 *
 *  Created on: Apr 23, 2023
 *      Author: lenovo
 */


#include<stdio.h>
struct sum
{
	float feet;
	float inch;
};
int main()
{
	struct sum x, y, z;
	printf("Enter information for 1st distance \nEnter feet: ");
	fflush(stdout);
	scanf("%f", &x.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f" , &x.inch);
	printf("Enter information for 2nd distance \nEnter feet: ");
	fflush(stdout);
	scanf("%f", &y.feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f" , &y.inch);
	z.feet=x.feet+y.feet;
	z.inch=x.inch+y.inch;
	while(z.inch>=12)
	{
		z.feet+=1;
		z.inch-=12;
	}
	printf("Sum of distances= %.0f' %.1f''",z.feet, z.inch);
	return 0;
}
