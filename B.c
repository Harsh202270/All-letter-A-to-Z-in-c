#include <stdio.h>

int main() {
    int i,j;
    for(i=0 ; i<7 ; i++)
    {
        for(j=0 ; j<6 ;j++)
        {
            if(j==0)
                printf("11");
            else if((i==0 || i==3 || i==6) && (j<5))
                printf("11");
            else if((i==1 || i==2 || i==4 || i==5) && j==5)
                printf("11");
            else 
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}