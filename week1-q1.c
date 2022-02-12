#include<stdio.h>
int main()
{
   int regdno;
   char name[50];
   char branch[4];
   printf("enter your name");
   gets(name);
   printf("\nenter your regd no.");
   scanf("%d",&regdno);
   printf("\nenter your branch");
   scanf("%s",&branch);
   printf("name:%s",name);
   printf("\nregd no.:%d",regdno);
   printf("\nyour branch:%s",branch);
    return 0;
}

