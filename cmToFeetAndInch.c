#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float cm;
    float feet;
    float inch;

    //input//
    puts("\n--------------------------------------------------------");
    puts("Input Section: ");
    puts("---------------");
    printf("Enter the value in cm: ");
    scanf("%f", &cm);
    //processing//
    feet = cm * 0.0328084;
    inch = cm * 0.393701;
    //output//
    puts("\n--------------------------------------------------------");
    puts("Output section: ");
    puts("----------------\n");
    printf("The value in feet is: %.2f feet/s\n", feet);
    printf("The value in inch is: %.2f inch/es\n", inch);
    puts("--------------------------------------------------------");
    printf("\nPress any key to exit...");
    getch();


}
