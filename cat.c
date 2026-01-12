#include<stdio.h>
#include<stdbool.h>
//int main(void)
/*{
    int i=0;
    while(i<3)
    {
        printf("Meow \n");
        i++;
    }*/
    
/*{
    int i=3;
    while(i>0)
    {
        printf("Meow \n");
        i--;
    }
}*/

/*int main(void)
{
    int n;
    int i;
    while(true)
    {
        n=printf("enter a value of n : ");
        scanf("%i",&n);
        if (n<0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    for (i=0;i<n;i++)
    {
        printf("meow \n");
    }
}*/
int main (void)
{
    int n,i;
    do
    {
        n=printf("enter a value of n : ");
        scanf("%i",&n);
    }
    while(n<0)
    {
        continue;
    }
    for (i<0;i<n;i++)
    {
        printf("Meow \n");
    }
}
