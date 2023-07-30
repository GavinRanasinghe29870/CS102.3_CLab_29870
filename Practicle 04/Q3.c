#include <stdio.h>
int main()
{
    int choice;
    float radius;
    float circumference, area, volume;

    printf("Menu:\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

    switch (choice) {
        case 1:
            circumference = 2 * 3.14159 * radius;
            printf("Circumference of the circle: %.2f\n", circumference);
            break;
        case 2:
            area = 3.14159 * pow(radius, 2);
            printf("Area of the circle: %.2f\n", area);
            break;
        case 3:
            volume = (4.0 / 3.0) * 3.14159 * pow(radius, 3);
            printf("Volume of the sphere: %.2f\n", volume);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

}
