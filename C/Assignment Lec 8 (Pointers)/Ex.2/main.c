/*
 * main.c
 *
 *  Created on: May 5, 2023
 *      Author: lenovo
 */


#include<stdio.h>
int main()
{
	int i;
	char alpha='A';
	int* p=&alpha;
	for(i=0 ; i<26 ; i++)
	{
		printf("%c \t", (*p)+i);
	}
	return 0;
}
