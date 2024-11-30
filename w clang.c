#include<stdio.h>
int add();
int main()
{
int s = add();
printf("sum is:%d\n",s);}
int add(){
	int num1 = 10;
	int num2 = 20;
	return num1+num2;
}
