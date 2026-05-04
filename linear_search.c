//finding a number in the array
/*#include <stdio.h>
#include <conio.h>

int main(void)
{
    int num[]= {10,20,30,40,50,55,45};
    int i;
    int n=printf("enter a number : ");
    scanf("%d",&n);
    for (i=0;i<7;i++)
    {
        if (num[i]==n)
        {
            printf("number found");
            return 0;
        }
        
    };
    printf("number not found");
    return 1;

}*/

//finding a name in the array
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[][20] = {"rupesh", "umesh", "raju", "rajesh"};
    char n[20];
    int i;

    printf("Enter a name: ");
    scanf("%s", n);

    for (i = 0; i < 4; i++)
    {
        //if (str)
        if (strcmp(name[i], n) == 0)
        {
            printf("Name found : %s \n",n);
            return 0;
        }
    }

    printf("Name not found\n");
    return 1;
}