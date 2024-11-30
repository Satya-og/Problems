#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x,y,dis;
int z;
printf("enter the values of a,b,c: ");
scanf("%f%f%f",&a,&b,&c);
dis=b*b-4*a*c;
printf("1=calculate");
scanf("%d",&z);
switch(z){
case 1:
if(dis > 0)
x = -b + sqrt(b*b-4*a*c)/2*a;
y = -b - sqrt(b*b-4*a*c)/2*a;
printf("the roots are %f%f :",x,y);
break;
case 2:
if(dis < 0)
printf("no roots");
break;
case 3:
if(dis == 0)
x = -b + sqrt(b*b-4*a*c) / 2*a;
y = -b - sqrt(b*b-4*a*c) / 2*a;
printf("the roots are %f%f:",x,y);
break;
default:
printf("invalid");
}
}
