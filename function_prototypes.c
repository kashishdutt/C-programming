#include <stdio.h>
#include <stdbool.h>

// function prototypes = Provide the compiler w/ information about a function's:
//                       name, return type, and parameters before its actual definition.
//                       Enables type checking and allows functions to be used before 
//                       they are defined.
//                       Improves readability, organization, and helps prevent errors.

void hello(char name[], int age);
bool ageCheck(int age);

int main(){

    hello("Mr. Panda", 25);

    if(ageCheck(30)){
        printf("You are old enough to work at microsoft");
    }
    else{
        printf("You must be 16+ to sign up at microsoft!");
    }

    return 0;
    
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}