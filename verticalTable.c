#include <stdio.h>
void main()
{
    int n, i, j;

    printf("Enter your number: ");
    scanf("%d", &n);

    printf("\nMultiplication table from 1 to %d\n", n);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%dx%d = %d", j, i, j * i);
            if (j != n)
                printf(", ");
        }
        printf("\n");
    }
}
