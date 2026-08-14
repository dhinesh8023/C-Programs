#include <stdio.h>

int main()
{
    int choice;
    float radius, side, length, breadth, base, height, area;
    do{
    printf("1. Area of Circle\n");
    printf("2. Area of Square\n");
    printf("3. Area of Rectangle\n");
    printf("4. Area of Triangle\n");
    printf("5.Exit\n5");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter side: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;
        case 3:
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter breadth: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 4:
            printf("Enter base: ");
            scanf("%f", &base);
            printf("Enter height: ");
            scanf("%f", &height);
            area = (base * height) / 2;
            printf("Area of Triangle = %.2f\n", area);
            break;
        case 5:
            printf("Exit\n");
            break;
        default:
            printf("Invalid Choice!");
    }
    }while (choice !=5);
    return 0;
}
