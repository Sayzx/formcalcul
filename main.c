#include <stdio.h>
#include <math.h>

void cubicCalcul() {
    int choice = 0;
    float length, perimeter, area = 0;
    printf("You chose cube\n");
    printf("Choose your calculation:\n");
    printf("1. Perimeter\n");
    printf("2. Area\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("You chose perimeter\n");
        printf("Enter the length of the cube:\n");
        scanf("%f", &length);
        perimeter = 4 * length;
        printf("The perimeter of the cube is %.3f\n", perimeter);
    } else if (choice == 2) {
        printf("You chose area\n");
        printf("Enter the length of the cube:\n");
        scanf("%f", &length);
        area = length * length,
        printf("The area of the cube is %.3f\n", area);
    } else {
        printf("Wrong choice\n");
    }
}

void circleCalcul() {
    int choice = 0;
    float radius, area, perimeter = 0;
    float pi = 3.141593;
    printf("You chose sphere\n");
    printf("Choose your calculation:\n");
    printf("1. Area\n");
    printf("2. Perimeter\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("You chose area\n");
        printf("Enter the radius of the sphere:\n");
        scanf("%f", &radius);
        area = pi * pow(radius, 2);
        printf("The area of the sphere is %.3f\n", area);
    } else if (choice == 2) {
        printf("You chose perimeter\n");
        printf("Enter the radius of the sphere:\n");
        scanf("%f", &radius);
        perimeter = 2 * radius * pi;
        printf("The perimeter of the sphere is %.3f\n", perimeter);
    } else {
        printf("Wrong choice\n");
    }
}

void rectangularCalcul() {
    int choice, length, width, perimeter, area = 0;
    printf("You chose rectangle\n");
    printf("Choose your calculation:\n");
    printf("1. Perimeter\n");
    printf("2. Area\n");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("You chose perimeter\n");
        printf("Enter the length of the rectangle:\n");
        scanf("%d", &length);
        printf("Enter the width of the rectangle:\n");
        scanf("%d", &width);
        perimeter = (length + width) * 2;
        printf("The perimeter of the rectangle is %d\n", perimeter);
    } else if (choice == 2) {
        printf("You chose area\n");
        printf("Enter the length of the rectangle:\n");
        scanf("%d", &length);
        printf("Enter the width of the rectangle:\n");
        scanf("%d", &width);
        area = length * width;
        printf("The area of the rectange is %d", area);
    } else {
        printf("Wrong choice\n");
    }
}

int main() {
    int choice;
    printf("Welcome in the TP Formes\n");
    printf("Choose a form:\n");
    printf("1. Cube\n");
    printf("2. Sphere\n");
    printf("3. Rectangle\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            cubicCalcul();
            break;
        case 2:
            circleCalcul();
            break;
        case 3:
            rectangularCalcul();
            break;
        case 4:
            printf("Bye bye\n");
            break;
        default:
            printf("Wrong choice\n");
            break;
    }
}