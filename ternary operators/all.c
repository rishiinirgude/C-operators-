// Program for ternary operators

#include <stdio.h>

int main()
{
    int a, b, max;
    a = 10;
    b = 20;
    max = (a > b) ? a : b;

    printf("%d", max);
    return 0;
}