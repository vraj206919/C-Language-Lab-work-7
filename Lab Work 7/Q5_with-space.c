#include <stdio.h>

int main()
{
    int row = 5;

    for (int i = row; i >= 1; i--)
    {

        for (int j = 0; j < row - i; j++)
        {
            printf("  ");
        }

        for (int k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
