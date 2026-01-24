#include<stdio.h>
int main(void)
{
    char c1='H'; // character only stores a single value so we use only single codes to initialize the character
    char c2='I';
    char c3='!';
    
    printf("%c %c %c",c1,c2,c3);
    printf("\n%i %i %i",c1,c2,c3);//it will shows the ascci values of a character

    // BY USING STRING ARRAY
    char word[]="HI!";
    printf("\n%s",word);

    char *str[2];
    str[0]="hi!";
    str[1]="bye!";
    printf("\n%c %c %c",str[0][0],str[0][1],str[0][2]);
    printf("\n%c %c %c",str[1][0],str[1][1],str[1][2],str[1][3]);
}