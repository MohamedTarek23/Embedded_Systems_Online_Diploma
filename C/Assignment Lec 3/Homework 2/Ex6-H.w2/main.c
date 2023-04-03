/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int x,i, sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &x);
	for(i=0 ; i<=x ; i++)
	{
		sum+=i;
	}
	printf("sum= %d" , sum);
}
