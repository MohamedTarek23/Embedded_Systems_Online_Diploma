/*
 * main.c
 *
 *  Created on: May 6, 2023
 *      Author: lenovo
 */


#include<stdio.h>
int main()
{
	int n,i,arr[15];
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &n);
	int* ptr=&arr[0];
	for(i=0 ; i<n ; i++)
	{
		printf("element -%d : ", i+1);
		fflush(stdin) ; fflush(stdout);
		scanf("%d", ptr);
		++ptr;
	}
	ptr=&arr[n-1];
	printf("\nThe elements of the reversed array are: \n");
	for(i=n ; i>0 ; i--)
	{
		printf("element -%d : %x\n" , i, *ptr);
		--ptr;
	}

	return 0;
}
