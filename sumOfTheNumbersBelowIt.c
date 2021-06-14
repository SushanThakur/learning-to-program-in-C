#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int sum(int);

int main(void){
    int no;
    printf("Enter a number: ");
    scanf("%d",&no);
    printf("\nSum: %d\n",sum(no));
    int ret = sum(no);
    printf("%d",ret);
    printf("\n\nPress any key to exit...");
    getch();

}

int sum(int no){
    if (no!=0){
        return no+sum(no-1);
    }
    else{
        return no;
    }
}
