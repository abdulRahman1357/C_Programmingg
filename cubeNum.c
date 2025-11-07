#include <stdio.h>
void main()
{
    int num, i, j , cube = 1;
    printf("Enter your number:");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for(j=1;j<=3;j++)
        {
            cube = cube*i;
        }
        printf("Number is :%d and and the cube of %d is:%d\n",i,i,cube);
        cube=1;
    }
}
