#include<stdio.h>
void main()
{
    int n,i;
    float sum=0;
    printf("Enter your limit:");
    scanf("%d",&n);
    printf("The harmonic series is:");
    for(i=1;i<=n;i++)
    {
        printf("1/%d ",i);
        if(i!=n)
        {
            printf("+");
        }
        sum+=(1.0/i);

    }
    printf("Sum of series upto %d is:%f",n,sum);
}