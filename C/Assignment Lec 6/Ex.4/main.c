/*
 * main.c
 *
 *  Created on: Apr 25, 2023
 *      Author: lenovo
 */

#include <stdio.h>
struct student
{
	int roll;
	char name[50];
	int marks;
};
int main()
{
	int i;
	struct student X[10];
	printf("Enter information of students: \n");
	for (i=0 ; i<10 ; i++)
	{
		printf("\nFor roll number %d\n", i+1);
		printf("Enter name: ");
		fflush(stdin); fflush(stdout);
		scanf("%s", &X[i].name);
		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%d", &X[i].marks);
	}
	printf("\nDisplaying information of students: \n");
	for(i=0; i<10 ; i++)
	{
		printf("\nInformation for roll number %d\n", i+1);
		printf("Name: %s\n", X[i].name);
		printf("marks: %d\n" , X[i].marks);
	}
	return 0;
}
