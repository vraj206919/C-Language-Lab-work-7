#include <stdio.h>

int main()
{
    int row = 5;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < (row - i); k++)
        {

            if ((i + k) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }

        printf("\n");
    }

    return 0;
}
