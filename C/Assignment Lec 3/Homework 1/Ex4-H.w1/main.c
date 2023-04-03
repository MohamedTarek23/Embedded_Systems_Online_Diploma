/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Mohamed Tarek
 */
#include<stdio.h>
void main()
{
	float x, y, product;
	printf("enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &x , &y);
	product=x*y;
	printf("Product: %f", product);
}

