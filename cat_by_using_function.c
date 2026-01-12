#include<stdio.h>
void meow(int n)
{
    n=printf("enter a value of n : ");
    scanf("%i",&n);
    for (int i=0;i<n;i++)
    {
        printf("Meow \n ");
    }
}
void main(void)
{
    int n;
    meow(n);
}