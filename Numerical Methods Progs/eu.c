#include<stdio.h>
#include<math.h>
float f(float x,float y)
 {
   return(pow(x,3)+y);
 }

int main()
{
float x0,y0,h=0.02,xn,y1;
printf("enter the value of x0,y0,xn:");
scanf("%f%f%f",&x0,&y0,&xn);
do
{
printf("x0=%f,y0=%f\n",x0,y0);
y1=y0+h*f(x0,y0);
y0=y1;
x0=x0+h;
}
while(x0<=xn);
return 0;
}
