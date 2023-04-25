#include<stdio.h>
struct complex
{
	double m_R;
	double m_I;
};
struct complex ReadData(char name[])
{
	struct complex C;
	printf("For 1st complex number \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%lf %lf" , &C.m_R, &C.m_I);
	return C;
};
struct complex AddComplex(struct complex A, struct complex B)
{
	struct complex C;
	C.m_R=A.m_R+B.m_R;
	C.m_I=A.m_I+B.m_I;
	return C;
};
void PrintComplex(char name[], struct complex Z)
{
	printf("sum=%.1lf+%.1lfi", Z.m_R, Z.m_I);
}
int main()
{
	struct complex X,Y,Z;
	X=ReadData("X");
	Y=ReadData("Y");
	Z=AddComplex(X,Y);
	PrintComplex("Z",Z);

	return 0;
}
