#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
float x[20],y[20],f,s,h,d,p;
int j,i,k,n;
printf("                           NEWTON BACKRWARD INTERPOLATION          \n\n\n");
printf("Enter Value Of N: ");
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
s=(f-x[n])/h;
p=1;
d=y[n];

for(i=n,k=1;i>=(n-1);i--,k++)
{
for(j=n;j>=(n-i);j--)
{
y[j]=y[j]-y[j-1];
}
p=p*(s+k-1)/k;
d=d+p*y[n];
}
printf("\nFor The Value Of X=%.3f \nThe Value Of Y=%.3f",f,d);
}
