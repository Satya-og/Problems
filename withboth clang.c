#include<stdio.h>
int sum(int a,int b);
int main()
{
int a,b,r;
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
r=sum(a,b);
}
int sum(int x,int y)
{
int s;
s=x+y;
printf("%d",s);
return s;
}
