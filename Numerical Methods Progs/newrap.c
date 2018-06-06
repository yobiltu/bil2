#include<stdio.h>
#include<math.h>
#define f(x) ((3*x)-(cos(x))-(1))
#define df(x) ((3)+(sin(x)))

int main()
{
	float a,e=.0001;
	printf("Enter the value of A : ");
	scanf("%f",&a);
	do
	{
		a= a-((f(a)/df(a)));
	}
	while (fabs(f(a)) > e);
	printf(" Result %.4f",a);
    return 0;
}
