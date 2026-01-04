#include <stdio.h>

int main() {
    int i,j;
    for(i=0 ; i<6 ; i++)
    {
        for(j=0 ; j<4 ;j++)
        {
            if((i==0 || i==5 ) && j>0 )
                printf("11");
            else if ((i!=0 && i!=5) && j==0)
                printf("11");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}