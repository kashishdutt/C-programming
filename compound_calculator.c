
#include <stdio.h>
#include <math.h>

int main(){

    //  COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the pincipal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the no. of years (t): ");
    scanf("%d", &years);

    printf("Enter # of times coumpounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("\nAfter %d years, the total will be $%.2f", years, total);
    
    return 0;

}