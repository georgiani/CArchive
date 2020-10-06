#include <stdio.h>

int main()
{
    char a[102], ultimoCarattere;
    int n = 0;

    while ((a[n] = getchar()) != '\n')
        ultimoCarattere = a[n++];

    for (int i = 0; i < n; i++)
        if (a[i] != ultimoCarattere)
            printf("%c", a[i]);

    return 0;
}