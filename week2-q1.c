#include <stdio.h>
#include <string.h>
int main()
{
    char a1[30];
    char a2[30];
    scanf("%s", &a1);
    scanf("%s", &a2);
    strcat(a1, a2);
    for (int i = strlen(a1) - 1; i >= 0; i--)
        printf("%c", a1[i]);
    return 0;
}