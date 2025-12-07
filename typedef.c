#include <stdio.h>

typedef int Number;

// typedef = reserved keyword that gives an existing datatype a "nickname"
//           Helps simplify complex types and improves code readability

//           typedef existing_type new_name;

int main(){

    Number x = 3;
    Number y = 4;
    Number z = x + y;

    printf("%d", z);

    return 0;
}