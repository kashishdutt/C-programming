#include <stdio.h>

int main(){

    //format specifiers % = defines and formates a type of data to be displayed

    // %c = character
    // %s = string 
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 99.54;

    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);

    return 0;
}