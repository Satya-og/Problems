#include<stdio.h>
int ar(int side)
{return side * side;}
int peri(int side)
{return 4 * side;}
int main()
{
int side;
printf("enter the side:\n");
scanf("%d",&side);
int area = ar(side);
int perimeter = peri(side);
printf("the area is:%d\n",area);
printf("the perimeter is:%d\n",perimeter);
}
