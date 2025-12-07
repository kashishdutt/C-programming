#include <stdio.h>
#include <string.h>

int main(){

    // Array of Strings(EXERCISE)

    char names[3][25] = {0};

    
  
    for(int i = 0; i < 3; i++){
        printf("Enter a name: ");
    fgets(names[i], sizeof(names[i]), stdin);
    names[i][strlen(names[i]) - 1] = '\0';

    }

    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);

    return 0;
}