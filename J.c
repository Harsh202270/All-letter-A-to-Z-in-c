#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {

            if(i == 0 || (j == 7 && i < 7) || (i > 6 && j > 0 && j < 7))
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
