#include<stdio.h>
#include<math.h>
int main()
{
int i=1,n;
double x,sum=1;
printf("enter the values of n,x");
scanf("%lf,%d",&x,&n);
while(i<=n)
{
if(i%2==0)
{
sum+=pow(x,i);
}
else{
sum-=pow(x,i);
}
i++;
}
printf("%.2lf",sum);
}
