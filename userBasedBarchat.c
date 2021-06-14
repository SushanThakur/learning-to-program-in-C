#include <stdio.h>
#include <stdlib.h>

void callsPrint(int data[], int no);
void printsOnce(int no);
void printArray(int data[], int no);

int main(void)
{
    printf("      +-------------------------------+\n");
    printf("      | User Based Bar Graph Creator. |\n");
    printf("      +-------------------------------+\n\n");
    int no;
    printf("Enter how many data you have: ");
    scanf("%d", &no);
    puts("");
    if (no<2)
    {
        printf("\nAT LEAST 2 DATA REQUIRED. \n");
        printf("\nPress any key to exit...");
        getch();
        exit(0);
    }
    int data[no];
    for (int i=0; i<no; i++)
    {
        printf("Enter data no.%2d: ",i+1);
        scanf("%d",&data[i]);
        if (data[i]>100)
        {
            printf("\nDIGIT MORE THAN 100 ARE NOT ALOWED.\n");
            printf("\nPress any key to exit...");
            getch();
            exit(0);
        }
    }
    system("cls");
    printf("      +-------------------------------+\n");
    printf("      | User Based Bar Graph Creator. |\n");
    printf("      +-------------------------------+\n\n");
    printf("The data you entered are as follows: \n");
    printArray(data, no);
    puts("----------------------------------------------------------------------------------------------------");
    printf("The bar graph for the given data is as follows: \n");
    puts("----------------------------------------------------------------------------------------------------");
    callsPrint(data, no);
    puts("----------------------------------------------------------------------------------------------------");
    printf("\nPress any key to exit...");
    getch();
}

void printArray(int data[], int no)
{
    for (int i=0; i<no; i++)
    {
        printf("Data no.%2d: %d\n",i+1, data[i]);
    }
}

void callsPrint(int data[], int no)
{
    for (int i=0; i<no; i++)
    {
        printf("(%3d)|",data[i]);
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
















