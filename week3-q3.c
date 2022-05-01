#include<stdio.h>
#include<stdlib.h>
 
void isEvenNum(int number);     
 
void main()
{
      int num;
      printf("Enter an integer: ");
      scanf("%d", &num);
      isEvenNum(num);
 
      system("pause");
}
 
void isEvenNum(int number)       
{
    if(number%2==0)
        printf("%d is an even number\n",number);
    else
        printf("%d is not an even number\n",number);
}
