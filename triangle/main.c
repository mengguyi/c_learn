#include <stdio.h>

double l1, l2, l3;

int main()
{
    printf("Please enter the three side lengths of the triangle (one per line).\n");
    scanf("%lf %lf %lf", &l1, &l2, &l3);
    printf("The perimeter is %lf", l1 + l2 + l3);
    return 0;
}