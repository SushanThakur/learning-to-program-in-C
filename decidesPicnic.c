#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int weather;
    int car;
    int bus;
    int snacks;
    int food;
    int mood;
    int decision;

    puts("------------------------------------------------------------------\n");
    printf("How's the weather? (0=Bad, 1=Good)");
    scanf("%d", &weather);
    printf("Do you have car? (0=No, 1=Yes)");
    scanf("%d", &car);
    printf("Is there bus availabe? (0=No, 1=Yes)");
    scanf("%d", &bus);
    printf("Do you have snacks with you? (0=No, 1=Yes)");
    scanf("%d", &snacks);
    printf("Is there any resturant nearby? (0=No, 1=Yes)");
    scanf("%d", &food);
    printf("How's your mood? (0=Bad, 1=Good)");
    scanf("%d", &mood);
    puts("------------------------------------------------------------------\n");
    decision = weather && (car || bus) && (snacks || food) && mood;
    puts("1 = you can go picnic and 0 = you cant go picnic.\n");
    printf("Output: %d\n", decision);
    puts("------------------------------------------------------------------");
    printf("\nPress any key to exit...");
    getch();
}
