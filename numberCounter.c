#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int lowerLimit;
    int upperLimit;

    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);
    printf("----------------------\n");

    mainFunction(lowerLimit, upperLimit, 1);
    printf("----------------------\n");
    printf("\nPress any key to exit...");
    getch();
}

void mainFunction(int small,int big, int k)
{
    printf("Step:[%d]: %d\n",k, small);
    if(small < big)
        mainFunction(small + 1, big, k + 1);

}

