#include <stdio.h>
int main()
{
    int mul = 1, n, orig, cout = 0, i, new, last, first;
    printf("Enter the number:");
    scanf("%d", &n);
    orig = n;
    while (n != 0)
    {

        cout++;
        n = n / 10;
    }
    cout = cout - 2;
    while (cout != 0)
    {
        mul = mul * 10;
        cout--;
    }
    last = orig % 10;
    orig = orig / 10;
    first = orig / mul;
    orig = orig % mul;
    new = ((last * mul) + orig) * 10 + first;
    printf("%d", new);
    return 0;
}