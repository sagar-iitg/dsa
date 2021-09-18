#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    while (i<5 & j<10)
    {
        i++;
        j++;
    }
    printf("%d %d", i, j);
}

