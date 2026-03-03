#include <stdio.h>

int main()
{
    int i, j, plane;

    for (i = 5; i >= 1; i--)
    {

        for (plane = 1; plane < i; plane++)
        {
            printf("  ");
        }

        for (j = i; j <= 5; j++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}