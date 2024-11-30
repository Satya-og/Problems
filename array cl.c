#include<stdio.h>
int display(int marks[]);
int main()
{
int marks[5] = {99,90,96,93,95};
display(marks);
}
int i;
for (i = 0; i <= 4; i++)
{printf("%d\t",marks[i]);}
