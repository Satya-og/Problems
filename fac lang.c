#include<stdio.h>
int main()
{
int a,factorial;
printf("enter the number:");
scanf("%d",&a);
for (int i = 1; i <= a; i++)
{factorial *= i;}
printf("Factorial of %d\n", a, factorial);}
