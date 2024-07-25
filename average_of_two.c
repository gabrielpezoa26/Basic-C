#include <stdio.h>
#include <math.h>

int value1;
int value2;

float average(int num1, int num2) {
    float sum = num1 + num2;
    return sum / 2;
}

int main(){
    printf("Enter the first number: ");
    scanf("%d", &value1);
    printf("Enter the second number: ");
    scanf("%d", &value2);
    
    float result = average(value1, value2);

    printf("The average is: %.2f\n", result);
}