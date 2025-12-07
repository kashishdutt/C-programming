#include <stdio.h>


int main(){

    // switch = A more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
           printf("Perfect!\n");
           break;
        case 'B':
           printf("You did great!\n");
           break;
        
        case 'C':
           printf("You did okay!\n");
           break;
        
        case 'D':
           printf("At least its not F!\n");
           break;
        case 'F':
           printf("YOU FAILED! :)\n");
           break;
        default:
           printf("Please enter only valid grades!");
           break;

    }
        



    return 0;
}