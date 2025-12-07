#include <stdio.h>

int main(){

    int rows = 0;
    int column = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of column: ");
    scanf("%d", &column);

    printf("Enter the symbol to use: ");
    scanf(" %c", &symbol);

    

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < column; j++){
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}