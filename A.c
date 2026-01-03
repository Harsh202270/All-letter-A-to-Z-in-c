#include <stdio.h>

int main() {
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<11;j++)
        {
            if(j==5-i || j==5+i)
                printf("11");
            else if(i==3 && j>2 && j<9)    
                printf("1");
            else 
                printf(" ");
                
        }
        printf("\n");
    }
    return 0;
}