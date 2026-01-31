#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 7; j++) {
            if(j == 0 || j == 6 || (i == j && j <= 3) || (i + j == 6 && j >= 3))
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
