/*
 * main.c
 *
 *  Created on: Apr 7, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int n,i, ins, loc;
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d" , &n);
	int matrix[n];
	for(i=0 ; i<n ; ++i)
	{
		matrix[i]=i+1;
		printf("%d\t" , matrix[i]);
	}
	printf("\nEnter the element to be inserted: ");
	fflush(stdout);
	scanf("%d" ,&ins);
	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d" , &loc);
	for(i=1 ; i<=n ; ++i)
	{
		if(i==loc)
		{
			printf("%d\t" , ins);
		}
		printf("%d\t" , matrix[i-1]);
	}

}
