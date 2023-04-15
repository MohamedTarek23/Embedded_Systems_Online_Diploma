/*
 * main.c
 *
 *  Created on: Apr 7, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int i,n , x;
	printf("Enter the number of elements: ");
	fflush(stdout);
	scanf("%d" , &n);
	int matrix[n];
	for(i=1 ; i<=n ; ++i)
	{
		matrix[i-1]=11*i;
		printf("%d\t" ,matrix[i-1]);

	}
	printf("\nEnter the element to be searched: ");
	fflush(stdout);
	scanf("%d" ,&x );
	for (i=1 ; i<=n ; ++i)
	{
		if(matrix[i-1]==x)
		{
			printf("\nNumber found at the location: %d" , i);
		}
	}
}
