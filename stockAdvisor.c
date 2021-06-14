#include <stdio.h>
#include <stdlib.h>

#define buyingPrice 25.00
#define sellingPrice 75.00

double getPrice(void);
void decision(double price);
void out(char value);

int main(void)
{
    puts("---------------------------------------------------------------------");
    puts("                         Stock Advisor                               ");
    puts("                         -------------                               \n");
    double value = getPrice();
    puts("\n---------------------------------------------------------------------");
    decision(value);
    puts("---------------------------------------------------------------------");
    printf("\nPress any key to exit...");
    getch();
}

double getPrice(void)
{
    double value;
    printf("Enter current stock value: ");
    scanf ("%lf", &value);
    return value;
}

void decision(double price)
{
    if (price <= buyingPrice)
        out('b');
    else
        if (price >= sellingPrice)
            out('s');
        else
            out('h');
}

void out(char value)
{
    switch(value)
    {
    case 'b':
        printf("I suggest you to buy some of these share.\n");
        break;
    case 's':
        printf("I suggest you to sell this share.\n");
        break;
    case 'h':
        printf("I suggest you to keep these share as it is.\n");
        break;
    default:
        printf("Sorry! no advice for this time.\n");
    }
}














