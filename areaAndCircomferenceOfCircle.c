#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void) {
    float radius;
    float area;
    float circomference;

    printf("Enter the radius of circle in cm: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;
    printf("The area of the circle having radius %.2f cm is %.2f cm² \n", radius, area);

    circomference = 2 * M_PI * radius;
    printf("The circomference of the circle having radius %.2f cm is %.2f cm \n", radius, circomference);

    return EXIT_SUCCESS;
}
