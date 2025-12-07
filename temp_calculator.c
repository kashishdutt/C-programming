#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit=='C'){
        printf("Enter the temp in celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1fF", temp);


    }
    else if(unit=='F'){
        printf("Enter the temp in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in celsius is: %.1fC", temp);


    }

    else{
        printf("\n %c not a valid unit of temp.!", unit);

    }

    return 0;
}
