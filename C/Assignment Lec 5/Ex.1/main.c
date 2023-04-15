/*
 * main.c
 *
 *  Created on: Apr 15, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int prime(int num)
{
	int i, flag=0 ;
	for(i=2 ; i<=num/2 ; i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	int x,y,i,flag;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%d %d" , &x , &y);
	for(i=x+1 ; i<=y ; i++)
	{
		flag=prime(i);
		if(flag==0)
		{
			printf("%d\t" , i);
		}
	}
}
