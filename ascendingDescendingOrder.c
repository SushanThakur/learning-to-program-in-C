#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

void arrange(int data[], int no);
void printArray(int data[], int no);
void arrangeDescending(int data[], int no);

int main(void)
{
    puts("          Keeps your numbers in ascending and decending orders.");
    puts("          -----------------------------------------------------");
    int limit;
    printf("\nEnter the times you want to enter numbers: ");
    scanf("%d",&limit);
    int data[limit];
    puts("");
    //INPUT loop starts
    for (int i=0; i<limit; i++)
    {
        printf("Enter Data no. %2d: ",i+1);
        scanf("%d",&data[i]);
    }
    system("cls");
    puts("          Keeps your numbers in ascending order.");
    puts("          --------------------------------------");
    printf("The numbers you entered: \n");
    printArray(data,limit);
    puts("");
    printf("Press any key to begin converting your data.\n");
    int ch;
    getch();
    for (int i=1; i<=15; i++)
    {
        system("cls");
        puts("          Keeps your numbers in ascending order.");
        puts("          --------------------------------------");
        printf("The numbers you entered: \n");
        printArray(data,limit);
        printf("\nProcesing Data...");
    }
    system("cls");
    puts("          Keeps your numbers in ascending order.");
    puts("          --------------------------------------");
    printf("The numbers you entered: \n");
    printArray(data,limit);
    puts("***********************************************");
    arrangeAscending(data, limit);
    printf("The numbers arranged in ascending order: \n");
    puts("----------------------------------------");
    printArray(data,limit);
    puts("***********************************************");
    arrangeDescending(data, limit);
    printf("The numbers arranged in descending order: \n");
    puts("-----------------------------------------");
    printArray(data,limit);
    puts("***********************************************");
    printf("\nPress any key to exit...");
    getch();
}

void printArray(int data[], int no)
{
    for(int i=0; i<no; i++)
    {
        printf("Data no. %2d: %d\n",i+1, data[i]);
    }
}


void arrangeAscending(int data[], int no)
{
    int switched;
    int temp;
    do
    {
        switched = FALSE;
        for (int i=1; i<no; i++)
        {
            if (data[i-1] > data[i])
            {
                temp = data[i-1];
                data[i-1] = data[i];
                data[i] = temp;
                switched = TRUE;
            }
        }

    }while(switched);
}

void arrangeDescending(int data[], int no)
{
    int temp;
    int switched;
    do
    {
        switched = FALSE;
        for (int i=1; i<no; i++)
        {
            if (data[i-1] < data[i])
            {
                temp = data[i-1];
                data[i-1] = data[i];
                data[i] = temp;
                switched = TRUE;
            }
        }
    }while(switched);
}






























