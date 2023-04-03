/*
 * main.c
 *
 *  Created on: Apr 1, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &c);
	printf("ASCI value of %c is %d" , c, c);
}
