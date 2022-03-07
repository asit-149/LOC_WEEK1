#include <stdio.h>
int main()
{
    int i, j, evensum = 0, oddsum = 0, a[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 10; j++)
    {
        if (a[j] % 2 == 0)
            evensum += a[j];
        else
            oddsum += a[j];
    }
    printf("%d %d", evensum, oddsum);
    return 0;
}