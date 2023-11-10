#include <stdio.h>

char a, b, c;

int main()
{
    a = getchar();
    b = getchar();
    c = getchar();

    putchar(a-32);
    putchar(b-32);
    putchar(c-32);

    putchar('\n');

    return 0;
}