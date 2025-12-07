#include <stdio.h>



    // logical operators = Used to combine or modify boolean expression.

    // && = AND
    // || = OR
    // ! = NOT

int main(){

    int temp = -5;
       
    if(temp <= 0 || temp >= 30){
        printf("The temperature is BAD");
    }
    else{
        printf("The temperature is GOOD");
    }

    
   
    return 0;
}