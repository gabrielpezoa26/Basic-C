#include <stdio.h>
#include <math.h>

int main(){
    int numerical_score;
    printf(" Welcome! Please insert your numerical score here: ");
    scanf("%d", &numerical_score);

    if (numerical_score >= 90 && numerical_score <= 100) {
        printf(" congratulations! your grade is A");
        return 0;
    }

    else if (numerical_score >= 80 && numerical_score <= 89) {
        printf(" congratulations! your grade is B");     
        return 0;   
    }

    else if (numerical_score >= 70 && numerical_score <= 79) {
        printf(" congratulations! your grade is C");
        return 0;        
    }

    else if (numerical_score >= 60 && numerical_score <= 69) {
        printf(" congratulations! your grade is D");
        return 0;        
    }

    else if (numerical_score >= 50 && numerical_score <= 59) {
        printf(" congratulations! your grade is F");
        return 0;
    }

    else{
        printf("ERROR: INVALID SCORE");
        return 0;
    }
}

/* Objective: Write a C program that calculates the letter grade of a student based on their numerical score. The program should prompt the user to enter a numerical score between 0 and 100 and then use if statements to determine the corresponding letter grade according to the following scale:

90-100: A
80-89: B
70-79: C
60-69: D
0-59: F
Instructions:

Create a new C file (e.g., grade_calculator.c).
In the main function, prompt the user to enter a numerical score.
Use if statements to determine the corresponding letter grade based on the entered score.
Print the letter grade.
Include error handling for scores outside the range of 0 to 100.
    printf("Your numerical score is: %d\n", numerical_score);
*/