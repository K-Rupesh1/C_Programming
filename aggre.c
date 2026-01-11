#include<stdio.h>
int main(void)
{
    char a=printf("are you agree ?");
    scanf("%c",&a);
    if (a=='y')
    {
        printf("agreed \n");
    }
    else
    {
        printf("not Agreed \n");
    }
}