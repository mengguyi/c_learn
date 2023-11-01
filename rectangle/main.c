#include <stdio.h>
int length , width , perimeter , square;

int compute_perimeter(int length,int width);
int compute_square(int length, int width);

int main()
{

    printf("Please input the length:");
    scanf("%d", &length);
    printf("Please input the width:");
    scanf("%d", &width);
    printf("perimeter is %d\n", compute_perimeter(length, width));
    printf("square is %d", compute_square(length, width));
    return 0;
}

int compute_perimeter(int length, int width)
{
    return length + length + width + width;
}

int compute_square(int length, int width)
{
    return length * width;
}