/*
 * main.c
 *
 *  Created on: Apr 15, 2023
 *      Author: lenovo
 */


#include<stdio.h>
int factorial(int num)
{

	if(num!=1)
	{
		return(num*factorial(num-1));
	}

}
int main()
{
	int num, result;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d" , &num);
	result= factorial(num);
	printf("The factorial of %d is %d",num , result );
	return 0;
}
