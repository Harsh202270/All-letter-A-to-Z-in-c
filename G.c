#include <stdio.h>

int main() {
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if((i==0 && j==0) || (i==9 && j==9) || (i==0 && j==9) || (i==9 && j==0))
            printf(" ");
            else if(j<2 || i==0  || i>8 || (j>3 && i==4) || (j>7 && i>4)){
                printf("1");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}