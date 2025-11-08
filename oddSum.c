#include <stdio.h>
void main()
{
    int n, i, num = 1, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", num);
        sum += num;
        num += 2;
    }

    printf("\nThe Sum of odd Natural Numbers upto %d terms : %d", n, sum);
}
