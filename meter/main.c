#include <stdio.h>

double input;

int main()
{
    printf("please input the length: ");
    scanf("%lf", &input);
    input *= 100;
    printf("%lf", input);
    return 0;
}