#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double C;
    double F;
    double K;
    //input//
    puts("-----------------------------------------------------------");
    puts("Input Section: ");
    puts("---------------\n");
    printf("Enter the temperature in celcius: ");
    scanf("%lf", &C);
    //input end//
    //Processing section:
    F = C * (9/5) + 32;
    K = C + 273;
    //processing section end//
    //output//
    puts("\n-----------------------------------------------------------");
    puts("Output Section: ");
    puts("----------------\n");
    printf("The converted value: \n");
    printf("Into farhenheit: %.2f\n", F);
    printf("Into kelvin: %.2f\n", K);
    puts("--------------------------------------------");
    printf("\nPress any key to exit...");
    getch();
}
