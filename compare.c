#include<stdio.h>
int main(void)
{
    int x,y;
    printf("enter a value of x : ");
    scanf("%i",&x);
    printf("enter a value of y : ");
    scanf("%i",&y);
    if (x<y)
    {
        printf("x is lesser than y");
    }
    else if(x>y)
    {
        printf("x is greather than y");
    }
    else
    {
        printf("x is equal to y");
    }
}