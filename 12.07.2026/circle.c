#include <stdio.h>
int main() {
    float radius, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    circumference = 2 * 3.14 * radius;
    printf("Circumference of Circle = %.2f", circumference);
    return 0;
}