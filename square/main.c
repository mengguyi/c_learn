#include <stdio.h>
double length;

int main()
{
    printf("Please input the length:");
    scanf("%lf", &length);
    printf("perimeter is %lf\n", length + length + length + length);
    printf("square is %lf", length * length);
    return 0;
}