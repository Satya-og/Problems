#include<stdio.h>
int main()
{
int n,i,a[100],max,min;
printf("enter the value of n");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for (i=1;i<n;i++)
{
if(a[i]>max){
 max=a[i];
 }
if(a[i] < min){
min=a[i];
}}
printf("max no is:%d",max);
printf("min no is:%d",min);
}

