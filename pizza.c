#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
    float bill = 0;

    char size;
    char pepperoni;
    char extra_cheese;
    printf(" Welcome! Please choose a pizza size(S/M/L): ");
    scanf(" %c", &size);
    size = toupper(size);

    if (size != 'S' && size != 'M' && size != 'L') {
        printf("ERROR: Please select a valid size (S, M, or L).\n");
        return 1; 
    }
    printf(" nice! do you want pepperoni?(Y/N)");
    scanf(" %c", &pepperoni);
    pepperoni = toupper(pepperoni);

    if (pepperoni != 'Y' && pepperoni != 'N'){
        printf(" ERROR: Please select a valid response (Y/N)");
        return 1;
    }
    printf(" nice! do you want extra cheese?(Y/N)");
    scanf(" %c", &extra_cheese);
    extra_cheese = toupper(extra_cheese);

    if (extra_cheese != 'Y' && extra_cheese != 'N'){
        printf(" ERROR: Please select a valid response (Y/N)");
        return 1;
    }
    
    if (size == 'S'){
        bill += 15; 
        if (pepperoni == 'Y'){
            bill += 2;
        }
        if (extra_cheese == 'Y'){
            bill += 1;
        }
    }
    else if (size == 'M'){
        bill += 20;
            if (pepperoni == 'Y'){
            bill += 3;
        }
            if (extra_cheese == 'Y'){
            bill += 1;
        }
    }
    else if (size == 'L'){
        bill += 25;
            if (pepperoni == 'Y'){
            bill += 3;
        }
            if (extra_cheese == 'Y'){
            bill += 1;
        }
    }
    else {
        printf("ERROR. Please select a valid size");
    }
    printf("%f", bill);   //teste
    return 0;
}

/*Exercise Instructions:
Objective: Write a C program to calculate the final bill for a pizza order based on the selected size, optional pepperoni, and extra cheese.

Steps:

- Prompt the user to choose a pizza size (S, M, or L).
- Validate the input to ensure it is one of the specified sizes (S, M, or L).
- Ask the user if they want to add pepperoni (Y or N).
- Ask the user if they want to add extra cheese (Y or N).
- Calculate the total bill based on the following criteria:
    - Small pizza (S): $15
    - Medium pizza (M): $20
    - Large pizza (L): $25
- Add $2 for pepperoni on a small pizza and $3 for pepperoni on medium and large pizzas.
- Add $1 for extra cheese on any size pizza.
Display the final bill amount.
   if (size == 'S' || size == 'M' || size == 'L'){
        char pepperoni;
        printf(" Do you wanna add pepperoni?(Y/N)");
        scanf(" %c", &pepperoni);
        pepperoni = toupper(pepperoni);

        char extra_cheese;
        printf(" Do you wanna add extra cheese?(Y/N)");
        scanf(" %c", &extra_cheese);
        extra_cheese = toupper(extra_cheese);
    }

    if (size != 'S' && size != 'M' && size != 'L') {
        printf("ERROR: Please select a valid size (S, M, or L).\n");
        return 1; // Exit with error code
    }

*/