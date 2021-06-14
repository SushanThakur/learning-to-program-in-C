#include <stdio.h>

int main(void)
{
    int aNumber;
    printf("Enter any number: ");
    scanf("%d", &aNumber);
    printf("The number you entered was: %d",aNumber);
    printf("\n\nPress any key to exit...");
    getch();
}
