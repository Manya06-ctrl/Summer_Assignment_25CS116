// write a program for quiz application
#include <stdio.h>

int main()
{
    int score = 0;
    char ans;

    printf("=== SIMPLE QUIZ APPLICATION ===\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
    {
        score++;
    }

    // Question 2
    printf("\n2. Which is the largest planet?\n");
    printf("a) Earth\nb) Mars\nc) Jupiter\nd) Venus\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'c' || ans == 'C')
    {
        score++;
    }

    // Question 3
    printf("\n3. Which language is used for system programming?\n");
    printf("a) Python\nb) C\nc) HTML\nd) JavaScript\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);

    if (ans == 'b' || ans == 'B')
    {
        score++;
    }

    // Result
    printf("\n=== RESULT ===\n");
    printf("Your score = %d out of 3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else if (score == 1)
        printf("Try better next time!\n");
    else
        printf("Need improvement!\n");

    return 0;
}