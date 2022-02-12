#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float d,a,cmf;
  printf("enter the radius of circle:");
   scanf("%d",&r);
   d=2*r;
   cmf=2*PI*r;
   a=PI*r*r;
   printf("diameter of circle:%f",d);
   printf("\ncircumference of circle is:%f",cmf);
   printf("\n5area of circle is:%f",a);

   return 0;
}