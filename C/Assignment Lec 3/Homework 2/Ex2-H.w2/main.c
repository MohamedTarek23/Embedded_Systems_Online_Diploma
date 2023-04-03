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
	printf("enter a character: ");
	fflush(stdout);
	scanf("%c" , &c);
	switch(c)
	{
	case 'a':
	{
		printf("%c is a vowel" , c);
		break;
	}
	case 'e':
	{
		printf("%c is a vowel" , c);
		break;
	}
	case 'i':
	{
		printf("%c is a vowel" , c);
		break;
	}
	case 'o':
	{
		printf("%c is a vowel" , c);
		break;
	}
	case 'u':
	{
		printf("%c is a vowel" , c);
		break;
	}
	default :
	{
		printf("%c is a consonant");
		break;
	}
	}
}
