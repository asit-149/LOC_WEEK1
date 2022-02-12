#include<stdio.h>
int main()
{
    int n1,n2,result=0;
    char op;
    printf("n1 [+,-*,/] n2");
    scanf("%d%c%d",&n1,&op,&n2);
    switch(op)
    {
        case '+':
        result=n1+n2;
        break;

        case '-':
        result=n1-n2;
        break;
        
        case '*':
        result=n1*n2;
        break;

        case '/':
        result=n1/n2;
        break;
    }
    printf("the result is %d\n",result);
    return 0;
}