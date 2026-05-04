#include<stdio.h>
#include<conio.h>
void draw(int n);
int main(void)
{
    int height;
    printf("height : ");
    scanf("%d",&height);
    draw(height);
}
void draw(int n)
{
    if(n<=0)
    {
        return 0;
    }
    draw(n-1);
    int i;
    for(i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}