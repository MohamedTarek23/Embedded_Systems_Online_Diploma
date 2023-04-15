/*
 * main.c
 *
 *  Created on: Apr 15, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int power(int base, int exp)
{
	if(exp!=1)
	{
		return(base*power(base,exp-1));
	}
}
int main()
{
	int base, exp, result;
	printf("Enter a base number: ");
	fflush(stdout);
	scanf("%d" , &base);
	printf("Enter power number (positive integer): ");
	fflush(stdout);
	scanf("%d" , &exp);
	result=power(base,exp);
	printf("%d ^ %d = %d" , base,exp,result);
}
