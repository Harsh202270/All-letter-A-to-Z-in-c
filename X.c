#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 7; i++) {
        for(j = 0; j < 7; j++) {
            if(j == i || j == 6 - i)
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
