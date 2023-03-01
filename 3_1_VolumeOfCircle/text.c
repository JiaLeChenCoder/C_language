#include<stdio.h>
#define PI 3.14
int main()
{
 double r=1.0;
 double v=1.0;
 printf("请输入半径\n");
 scanf("%d",&r);
 v=4.0/3*PI*r*r*r;
 printf("体积为%lf",v);
 return 0;
}