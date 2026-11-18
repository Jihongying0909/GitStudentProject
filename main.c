#include <stdio.h>

int main(void)
{
    int score;

    printf("Please enter the score: ");
    scanf("%d", &score);

    if (score >= 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}