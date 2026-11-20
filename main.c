#include <stdio.h>

int main(void)
{
    int score;

    printf("Please enter the score: ");

    if (scanf("%d", &score) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (score < 0 || score > 100)
    {
        printf("The score must be between 0 and 100.\n");
        return 1;
    }

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