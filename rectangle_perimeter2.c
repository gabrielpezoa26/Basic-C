#include <stdio.h>
#include <math.h>

float calculate_perimeter(float length, float width){
    float sum_lengths = length * 2;
    float sum_widths = width * 2;
    return sum_lengths + sum_widths;
}

int main(){
    float length;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    float width;
    printf("\nEnter the width of the rectangle: ");
    scanf("%f", &width);

    float perimeter = calculate_perimeter(length, width);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
}