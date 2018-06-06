#include<stdio.h>
void main()
{
 float x[100],y[100],a,s=1,t=1,k=0;
 int n,i,j,d=1;
 printf("\n\n enter the no terms of the table :");
 scanf("%d",&n);
 printf("\n\n enter the respective values of the variables x and y :\n");
 for(i=0;i<n;i++)
  {
	 scanf("%f",&x[i]);
	 scanf("%f",&y[i]);
  }
printf("\n\n the table you entered is as follows :\n\n");
for(i=0;i<n;i++)
{
  printf("%0.3f\t%0.3f",x[i],y[i]);
  printf("\n");
}
while(d==1)
{
 printf("\n\n\n enter the value of x to find the respective value of y \n\n\n");
 scanf("%f",&a);
 for(i=0;i<n;i++)
 {
  s=1;t=1;
  for(j=0;j<n;j++)
  {
	 if(j!=i)
	 {
	  s=s*(a-x[j]);
     t=t*(x[i]-x[j]);
	 }
}
k=k+((s/t)*y[i]);
 }
 printf("\n\n the respective value of the variabe y is:%f",k);
 printf("\n\n do you want to continue?\n\n press1 to continue and any other key to exit");
 scanf("%d",&d);
}
}