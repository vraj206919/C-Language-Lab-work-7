#include <stdio.h>

int main()
{
    int i, j, plane;

    for (i = 1; i <= 5; i++)
    {

        for (plane = 1; plane <= 5 - i; plane++)
        {
            printf("  ");
        }

        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}