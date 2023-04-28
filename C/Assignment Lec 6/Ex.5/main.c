/*
 * main.c
 *
 *  Created on: Apr 28, 2023
 *      Author: lenovo
 */

#include<stdio.h>
#include<math.h>
#define PI 3.1415
int main()
{
	float radius, area;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &radius);
	area=PI * radius*radius;
	printf("Area = %.2f",area);
	return 0;
}
