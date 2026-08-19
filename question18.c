//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
#include <stdio.h>

int main() {
    float score;


    printf("Enter percentage (0-100): ");
    scanf("%f", &score);

    if (score < 0 || score > 100) printf("Invalid input!\n");
    else if (score >= 90) printf("Grade A\n");
    else if (score >= 80) printf("Grade B\n");
    else if (score >= 70) printf("Grade C\n");
    else if (score >= 60) printf("Grade D\n");
    else printf("Grade F\n");

    return 0;
}
