#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
float x[20],y[20],f,s,h,d,p;
int j,i,n;
printf("                           NEWTON FORWARD INTERPOLATION          \n\n\n");
printf("Enter Value Of N:");
scanf("%d",&n);

printf("Enter Value Of X: ");
for(i=1;i<=n;i++)
{
scanf("%f,",&x[i]);
}

printf("Enter Value Of Y: ");
for(j=1;j<=n;j++)
{
scanf("%f,",&y[j]);
}

h=x[2]-x[1];
printf("Enter Value Of F: ");
scanf("%f",&f);
s=(f-x[1])/h;
p=1;
d=y[1];
for(i=1;i<=(n-1);i++)
{
for(j=1;j<=(n-i);j++)
{
y[j]=y[j+1]-y[j];
}
p=p*(s-i+1)/i;
d=d+p*y[1];
}
printf("\n\nFor The Value Of X=%f \nThe Value Of Y=%f",f,d);
}

