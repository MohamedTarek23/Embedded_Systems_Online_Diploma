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
	char S[]="w3resource";
	char *ptr=S;
	int len=strlen(S);
	printf("The length of the string= %d\n", len);
	printf("Reverse of the string is : ");
	for (i=len ; i>0 ; i--)
	{
		ptr=S[i-1];
		printf("%c" , ptr);
	}
	return 0;
}

