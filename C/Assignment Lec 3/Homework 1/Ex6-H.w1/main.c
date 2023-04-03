/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	float a, b, temp;
	printf("enter value of a: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("enter value of b: ");
	fflush(stdout);
	scanf("%f", &b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping, value of a= %.2f \n" , a);
	printf("after swapping, value of b= %.2f" , b);
}

