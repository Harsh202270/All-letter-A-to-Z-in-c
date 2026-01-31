#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 5; j++) {
            if((i < 3 && (i == j || i + j == 4)) || (i >= 3 && j == 2))
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
