/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	float x;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f" , &x);
	if(x>0)
	{
		printf("%.2f is positive" , x);
	}
	else if(x<0)
	{
		printf("%.2f is negative" , x);
	}
	else
	{
		printf("You entered zero");
	}
}
