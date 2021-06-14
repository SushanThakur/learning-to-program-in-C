#include <stdio.h>
#include <stdlib.h>

int multiple(int, int);

int main(void){
    int no;
    int t=1;
    printf("Enter any number: ");
    scanf("%d",&no);
    printf("\n");
    int returnedV = multiple(no, t);
    printf("\nReturned Value: %d\n",returnedV);
    return 0;
}


int multiple(int no, int t){
    int m;
    m = no * t;
    if (m != no*11){
        printf("%2d x %2d = %2d\n",no,t,m);
        return multiple(no, ++t);
    }
    return m-no;
}
