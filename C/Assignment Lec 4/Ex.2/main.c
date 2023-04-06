#include<stdio.h>
int main()
{
	int n, i;
	printf("enter the number of data: ");
	fflush(stdout);
	scanf("%d" , &n);
	float x[n] , sum=0, avg;
	for (i=0 ; i<n ; ++i)
	{
		printf("%d. enter a number: ", i+1);
		fflush(stdout);
		scanf("%f" , &x[i]);
		sum+=x[i];
	}
	avg=sum/n;
	printf("average= %.2f" , avg);
}
