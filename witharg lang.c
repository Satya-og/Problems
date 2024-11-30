#include<stdio.h>
int sum(int a,int b);
int main()
{
int a,b;
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
sum(a,b);
}
int sum(int x,int y)
{
int s;
s=x+y ;
printf("%d",s);
}
