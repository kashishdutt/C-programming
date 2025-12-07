#include <stdio.h>

int main(){


    char name[25]; //bytes

    int age;

    printf("\nWhat is your name sir?:");
    scanf("%s", &name);

    printf("What is your age?:");
    scanf("%d", &age);

    
    printf("\nHello %s, How are you?", name);
    printf("\nYou are %d years old!", age);

    return 0;

}