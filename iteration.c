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
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<i+1;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}