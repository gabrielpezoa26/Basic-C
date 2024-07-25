#include <stdio.h>
#include <math.h>

float account_balance = 1000;


int main(){
    int user_choice;
    float deposit;
    float withdraw;

    printf(" Welcome to Simple ATM\n");
    printf("1 - Check Balance\n");
    printf("2 - Deposit\n");
    printf("3 - Withdraw\n");
    printf("4 - Exit\n");
    scanf("%d", &user_choice);
    //printf("%d", user_choice);

    if (user_choice == 1){
        printf("Your current balance is %.2f$", account_balance);
        //loop
    }

    else if (user_choice == 2){
        printf(" Please digit here how much you want to deposit:  ");
        scanf("%f", &deposit);
        if (deposit <= 0){
            printf("ERROR. ");
            return 1;
        }
        else if (deposit > 0) {
        account_balance = account_balance + deposit;
        printf(" %.2f sucessfully deposited.", deposit);
        printf(" Now your balance is %.2f$", account_balance);
        }
    }

    else if (user_choice == 3){
        printf(" Your current balance is %.2f$ Please digit here how much you want to withdraw:  ", account_balance);
        scanf("%f", &withdraw);
        if (withdraw > account_balance){
            printf("ERROR. Withdraw bigger than account balance");
            return 1;
        }
        else if (withdraw <= account_balance){
            account_balance = account_balance - withdraw;
            printf(" %.2f Withdrawn sucessfully.", withdraw);
            printf(" Your new balance is %.2f", account_balance);
        }
        else {
            printf("ERRORRRR");
        }
    }

    else if (user_choice == 4){
        printf("Thank you for using Simple ATM. Goodbye!");
        return 0;
    }
}



/*Instructions:

initial balance

print function w/ options
    -check balance
        exception
    -deposit
        exception/check if valid
    -withdraw
        exception/check if valid
    -exit
        finishes the program/ return 0

loop
 
Initial Setup:

Initialize an account balance with a predefined amount (e.g., $1000).
User Options:

Display a menu of options:
Check Balance
Deposit Money
Withdraw Money
Exit
User Interaction:

Use a loop to continuously display the menu until the user chooses to exit.
Prompt the user to enter their choice and perform the corresponding action.
Actions:

Check Balance: Display the current account balance.
Deposit Money: Prompt the user to enter an amount to deposit. Add the amount to the account balance.
Withdraw Money: Prompt the user to enter an amount to withdraw. Subtract the amount from the account balance, ensuring the balance does not go negative. If the withdrawal amount is greater than the balance, display an error message.
Exit: Terminate the program.
Validation:

Ensure the deposit and withdrawal amounts are positive numbers.
*/