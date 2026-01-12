#include<stdio.h>
int main(void)
{
    int n;
    //getting a value from user
    n=printf("enter which matrix you want ? : ");
    scanf("%i",&n);
    //this is for row
    for (int row=0;row<n;row++)
    {
        // this is for coloumn
        for(int col=0;col<n;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}