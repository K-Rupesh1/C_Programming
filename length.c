#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[50];
    printf("enter a name : ");
    scanf("%s",name);
    int n=strlen(name);
    printf("%i",n);
}