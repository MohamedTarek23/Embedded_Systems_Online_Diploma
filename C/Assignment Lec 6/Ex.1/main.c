/*
 * main.c
 *
 *  Created on: Apr 23, 2023
 *      Author: lenovo
 */

#include <stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll_no;
	int marks;
};
int main()
{
	struct student info;
	printf("Enter information of students:\n");
	printf("Enter Name: ");
	gets(info.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d" , &info.roll_no);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%d" , &info.marks);
	printf("Displaying Information\nname: %s\nRoll: %d\nMarks: %d\n", info.name, info.roll_no, info.marks);

	return 0;
}
