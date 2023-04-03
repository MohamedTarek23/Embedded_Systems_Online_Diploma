/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: lenovo
 */
#include<stdio.h>
int main()
{
	int x, y, sum;
	printf("enter two integers: ");
	fflush(stdout);
	scanf("%d %d", &x , &y);
	sum=x+y;
	printf("sum: %d" , sum);
}

