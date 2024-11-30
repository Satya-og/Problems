#include<stdio.h>
int area();
int perimeter();
int main()
{
area();
perimeter();
}
int area()
{
int s,area;
printf("enter the value of s");
scanf("%d",&s);
area=s*s;
printf("area of square:%d",area);
}
int perimeter()
{
int s,perimeter;
printf("\nenter the value of s");
scanf("%d",&s);
perimeter=4*s;
printf("perimeter of square:%d",perimeter);
}
