#include <stdio.h>
double length , width , perimeter , square;

double compute_perimeter(double length, double width);
double compute_square(double length, double width);

int main()
{

    printf("Please input the length:");
    scanf("%lf", &length);
    printf("Please input the width:");
    scanf("%lf", &width);
    printf("perimeter is %lf\n", compute_perimeter(length, width));
    printf("square is %lf", compute_square(length, width));
    return 0;
}

double compute_perimeter(double length, double width)
{
    return length + length + width + width;
}

double compute_square(double length, double width)
{
    return length * width;
}