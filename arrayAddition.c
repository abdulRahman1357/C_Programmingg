#include<stdio.h>
void main()
{
    int arr1[5],arr2[5];
    printf("Enter first 5 numbers: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter second 5 numbers: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    
    for(int i=0;i<5;i++)
    {
        arr2[i]= arr1[i]+arr2[i];
    }
     printf("The sum of each element is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ,",arr2[i]);
    }
}

