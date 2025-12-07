#include <stdio.h>

void swap(int *x, int *y)
{
    printf("Before swapping, x = %d and y = %d\n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping, x = %d and y = %d\n", *x, *y);
}

int main()
{
    int a = 5, b = 10;
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping, a = %d and b = %d\n", a, b);
    return 0;
}