#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void makeData(int data[], int no);
void callsPrint(int data[], int no);
void printsOnce(int no);

int main(void)
{
    printf("        +----------------------------+ \n");
    printf("        |Random Bar chart generator. | \n");
    printf("        +----------------------------+ \n\n");
    int data[10];
    makeData(data, 10);
    callsPrint(data, 10);
    puts("\n-----------------------------------------------\n");
    printf("Press any key to continue...");
    getchar();
}

void makeData(int data[], int no)
{
    srand(time(NULL));
    for (int i=0; i<no; i++)
    {
        data[i] = rand() % 25;
    }
}

void callsPrint(int data[], int no)
{
    for (int i=0; i<no; i++)
    {
        printf("Data [%d] %2d: ",i,data[i]);
        printsOnce(data[i]);
    }
}

void printsOnce(int no)
{
    for (int i=0; i<no; i++)
    {
        putchar('*');
    }
    puts("");
}
















