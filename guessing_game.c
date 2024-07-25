#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include this header for time()

int attempts = 0;
int user_guess;
int value;

int generate_random_number() {
    srand(time(0)); 
    int N = 100; 
    int value = rand() % (N + 1);
    return value;
}
int user_prompt_guess() {
    int guess;
    printf("Please insert an integer number between 1 and 100: ");
    scanf("%d", &guess);
    if (guess >= 1 && guess <= 100) {
        return guess;
    } else {
        printf(" ERROR. Please insert a number between 1 and 100\n");
        return -1; // Use -1 to indicate an invalid input
    }
}
int too_high_low(){
    if (user_guess == value){
        printf(" Congratulations! You picked the correct number");
        //printf(" Number of attempts: %d", attempts)
        return 0;
    }
    else if (user_guess > value){
        printf(" Too high!");
        //loop
    }
    else if (user_guess < value){
        printf(" Too low!");
        //loop
    }

}



int main() {
    value = generate_random_number(); 
    
    // Loop until the user guesses the correct number
    while (1) {
        user_guess = user_prompt_guess(); 
        if (user_guess == -1) {
            continue;
        }
        attempts++; 
        
        if (too_high_low() == 0) {
            break; 
        }
    }
    
    printf(" Number of attempts: %d\n", attempts); 
    
    return 0;
}
/*
Exercise: Number Guessing Game
Objective: Write a C program that allows the user to play a number guessing game.

Instructions:

Game Setup:

Generate a random number between 1 and 100.
User Input:

Prompt the user to guess the number.
Game Logic:

Use a loop to allow the user to guess the number until they get it right.
After each guess, provide feedback:
If the guess is too high, print "Too high!"
If the guess is too low, print "Too low!"
If the guess is correct, print "Congratulations! You've guessed the number."
Output:

Display the number of attempts it took for the user to guess the number correctly.
Additional Requirements:

Use the rand function to generate the random number.
Use a loop for the guessing mechanism.
Ensure the random number generation is properly seeded using srand.

#
#
#

functions
    generate rand            ok 
    prompts user guess               ok
        check for valid input        ok

main{ 
    user prompt                    ok
    output (too high/too low)
        count attempts
    congratulations!
}
*loops


*/