/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int x,i=0, factorial=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d" , &x);
	if (x<0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else if (x==0)
	{
		printf("Factorial= 1");
	}
	else
	{
		for(i=1 ; i<=x ; i++)
		{
			factorial*=i;
		}
		printf("Factorial= %d", factorial);
	}
}
