#include<stdio.h>
#include<math.h>
#define f(x) ((3*x)-(cos(x))-(1))

int main()
{
	float a,b,c,e=.0001;
	printf(".........................Bisection Method..................");	
        printf("Enter the value of A & B : ");
	scanf("%f%f",&a,&b);
	do
	{
		c = (a + b)/2;

		if ((f(a)*f(c))<0)
			b = c;
		else
			a = c;
	}
	while (fabs(f(c)) > e);
	printf(" Result %.4f",c);
    return 0;
}
