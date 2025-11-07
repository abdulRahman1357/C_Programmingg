#include <stdio.h>
void main()
{
    int num1, num2, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == 0 || num2 == 0)
    {
        printf("Invalid numbers.");
    }
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("The hcf of %d and %d is %d", num1, num2, hcf);
}