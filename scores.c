#include <stdio.h>

int average(int x, int score[])
{
    int sum = 0;

    for (int i = 0; i < x; i++)
    {
        sum += score[i];
    }

    return sum / x;
}

int main(void)
{
    int x;

    printf("Enter how many scores you want to enter: ");
    scanf("%d", &x);

    int score[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &score[i]);
    }

    printf("Average = %d\n", average(x, score));

    return 0;
}
