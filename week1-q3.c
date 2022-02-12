#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 1:
        printf("the number is even");
        break;
    case 0:
       printf("the number is odd");
       break;
    }
}