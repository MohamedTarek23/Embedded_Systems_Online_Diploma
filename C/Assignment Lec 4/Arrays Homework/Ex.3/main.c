/*
 * main.c
 *
 *  Created on: Apr 7, 2023
 *      Author: lenovo
 */

#include<stdio.h>
int main()
{
	int i, j, row, col;
	printf("Enter rows and columns of the matrix: ");
	fflush(stdout);
	scanf("%d %d", &row , &col);
	int matrix[row][col];
	printf("Enter elements of the matrix: ");
	for(i=0 ; i<row ; ++i)
	{
		for(j=0 ; j<col ; ++j)
		{
			printf("enter element a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("entered matrix: \n");
	for(i=0 ; i<row ; ++i)
		{
			for(j=0 ; j<col ; ++j)
			{
				printf("%d ", matrix[i][j]);
				if(j==col-1)
				{
					printf("\n");
				}

			}
		}
	printf("\n");
	printf("Transpose matrix: \n");
	for(i=0 ; i<col ; ++i)
			{
				for(j=0 ; j<row ; ++j)
				{
					printf("%d ", matrix[j][i]);
					if(j==row-1)
					{
						printf("\n");
					}

				}
			}

}
