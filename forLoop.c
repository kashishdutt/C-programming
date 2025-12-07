#include <stdio.h>
#include <windows.h>

int main(){

    // for loop = Repeat some code a limited no. of times
    //            for(Initialization; Condition; Update)

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n", i);

    }

    printf("HAPPY BIRTHDAY!");
    return 0;
}