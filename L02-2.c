#include <stdio.h>
#define LEN 20

int main()
{
    char a[LEN];
    int i = 0, j = 0;

    while ((a[j++] = getchar()) != '.')
        ;

    j -= 2;

    while (i < j && a[i++] == a[j--])
        ;

    if (i < j)
        printf("Non e palindroma");
    else
        printf("E palindroma");
}