/*
 * main.c
 *
 *  Created on: May 5, 2023
 *      Author: lenovo
 */
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char fstr[50];
	char rstr[50];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s" , &fstr);
	char *fptr=fstr;
	for (i=strlen(fstr) ; i>0 ; i--)
	{
		char *rptr=fptr+(i-1);
		rstr[strlen(fstr)-i]=*rptr;
	}
	printf("Reverse of the string is : ");
	for(i=0 ; i<strlen(fstr) ; i++)
	{
		printf("%c" , rstr[i]);
	}
	return 0;
}

