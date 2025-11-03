#include<stdio.h>
void main()
{
    int num,primeC=0;
    printf("Enter the number:");
    scanf("%d",&num);
    
    for(int i=2;i<=num;i++)
    {   
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
            printf("%d",j);
            }
        }
       
    }
    
    // printf("Total prime number:%d",primeC);
}