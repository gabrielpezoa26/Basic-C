#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

float calculate_area(float radius) {
    return M_PI * radius * radius;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    float area = calculate_area(radius);

    // Print the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}