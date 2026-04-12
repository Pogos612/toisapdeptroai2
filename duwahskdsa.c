#include <stdio.h>

int main() {
    int choice;
    float radius, length, width, base, height, area;

    printf("Input 1 for area of circle\n");
    printf("Input 2 for area of rectangle\n");
    printf("Input 3 for area of triangle\n");

    printf("Input your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Input radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius; 
            printf("The area is : %f\n", area);
            break;

        case 2:
            printf("Input length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("The area is : %f\n", area);
            break;

        case 3:
            printf("Input base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area is : %f\n", area);
            break;

        default:
            printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}