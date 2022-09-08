#include <stdio.h>

int main () {

    int coffee;
    float price;
    float yearlyCost;

    printf("How many coffees do you drink per day? ");
    scanf("%i", &coffee);

    printf("How much does each coffee cost? ");
    scanf("%f", &price);

    yearlyCost = (((price * coffee) * 365) * 1.065) ;

    printf("Yearly cost: %.2f \n", yearlyCost);

    return 0;
}