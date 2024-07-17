#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *p;
    p = malloc(1);
    *(p) = 12345;
    *(p + 1) = 12345678;
    *(p + 3) = 23456;
    *(p + 5) = 123456;

    printf("%i %i %i %i ", *p, *(p + 1), *(p + 3), *(p + 5));
}