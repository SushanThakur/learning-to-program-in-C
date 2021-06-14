#include <stdio.h>
#include <stdlib.h>


void callFun(void);
void printFun(int no);

int main(void)
{
    callFun();
    printf("\nPress any key to exit...");
    getch();
}

void callFun(void)
{
    printFun(2);
    printFun(4);
    printFun(6);
    printFun(8);
    printFun(10);
    printFun(1);
    printFun(3);
    printFun(5);
    printFun(7);
    printFun(9);
}

void printFun(int no)
{
    printf("Data = %3d:",no);
    for (int i=1; i<=no; i++)
    {
        putchar('*');
    }
    putchar('\n');
}











