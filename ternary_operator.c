#include <stdio.h>
#include <stdbool.h>

int main(){

    // ternary operator ? = shorthand for if-else statements

    // (condition) ? value_if_true : value_if_false;

    int x = 8;
    int y = 16;

    int max = (x > y) ? x : y;

    printf("%d", max);


    return 0;
}