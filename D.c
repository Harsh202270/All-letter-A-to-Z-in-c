#include <stdio.h>

int main() {
    int i,j;
    for(i=0 ; i<7 ; i++)
    {
        for(j=0 ; j<6 ;j++)
        {
            if(j==0 || ((i==0 || i==6) && j<5)||(j==5 && i!=0 &&i!=6))
                printf("11");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}