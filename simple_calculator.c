#include <stdio.h>
#include <math.h>

float add(float num1, float num2){
    return num1 + num2;
}
float subtract(float num1, float num2){
    return num1 - num2;
}
float multiply(float num1, float num2){
    return num1 * num2;
}
float divide(float num1, float num2){
    return num1 / num2;
}

int main(){
    float num1;
    printf(" Welcome! Now, please insert the first number: ");
    scanf("%f", &num1);
    
    float num2;
    printf(" Great! Now, please insert the second number: ");
    scanf("%f", &num2);

    char operator;
    printf(" Great! Now, please choose your operator(+,-,*,/): ");
    scanf(" %c", &operator);

    if(operator == '+'){
    float result = add(num1, num2);
    printf(" the result is %.2f", result);
    return 0;
    }  
    
    else if(operator == '-'){
    float result = subtract(num1, num2);
    printf(" the result is %.2f", result);
    return 0;
    }
    
    else if(operator == '*'){
    float result = multiply(num1, num2);
    printf(" the result is %.2f", result);
    return 0;
    }

    else if(operator == '/'){
    float result = divide(num1, num2);
    printf(" the result is %.2f", result);
    return 0;
    }
}

/* Objective: Write a C program that acts as a simple calculator. The program should prompt the user to enter two numbers and an operator (+, -, *, /). It should then perform the corresponding arithmetic operation and print the result. The program should continue to prompt the user for new calculations until the user decides to exit.*/