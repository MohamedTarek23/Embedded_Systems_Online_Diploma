/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: Mohamed Tarek
 */
#include<stdio.h>
void main()
{
	int x;
	printf("enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &x);
	printf("You entered: %d" , x);

}

