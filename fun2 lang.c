#include<stdio.h>
int square(int);
int main()
{
int num,res;
printf("enter the number\n");
scanf("%d",&num);
res=square(num);
printf("square of%d = %d",num,res);
}
int square(int x)
{
return(x*x);
}
