/*
 * main.c
 *
 *  Created on: May 5, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int m=29;
	printf("Address of m: %x \nValue of m: %d \r\n", &m, m);
	printf("\nNow pointer ab is assigned with the adress of m \r\n");
	int* ab=&m;
	printf("Address of pointer ab: %x \n", ab);
	printf("Content of pointer ab: %d\r\n", *ab);
	m=34;
	printf("The value of m assigned to 34 now\n");
	printf("Address of pointer ab: %x \n", ab);
	printf("Content of pointer ab: %d\r\n", *ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now\n");
	printf("Address of m: %x \nValue of m: %d \r\n", &m, m);

	return 0;
}
