#include <stdio.h>
#include <math.h>
//  A = ½ (b × h) square units

float calculate_area(float base, float height){
    return base * height / 2;
}

int main(){
    float base;
    printf("Please enter the value of the base: ");
    scanf("%f", &base);
    
    float height;
    printf("Please enter the value of the height: ");
    scanf("%f", &height);

    if (base > 0 && height > 0) {
        // Calculate the area
        float area = calculate_area(base, height);
        // Print the result
        printf("The area of the triangle is: %.2f\n", area);
    } else {
        // Print an error message
        printf("ERROR: Both base and height must be positive numbers.\n");
    }

    return 0;
}   