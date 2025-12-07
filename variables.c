#include <stdio.h>

int main(){

    int x; //declaration
    x = 123; //initialization
    int y = 321; //declaration + initialization

    int age = 18;   //integer
    float cgpa = 9.5; //floating point number
    char grade = 'C'; //single character
    char name[] = "Ritik"; //arry of characters

    printf("Hello %s\n",name);
    printf("You are %d years old!\n",age);
    printf("Your cgpa is %.2f",cgpa);

    


    return 0;
}