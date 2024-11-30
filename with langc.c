#include<stdio.h>
int sum();
int main()
{
int R;
R=sum();
printf("%d",R);
}
int sum()
{
int a,b,s;
printf("enter the values of a,b");
scanf("%d%d",&a,&b);
s=a+b;
return s;
}
