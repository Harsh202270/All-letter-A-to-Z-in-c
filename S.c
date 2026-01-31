#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 5; j++) {
            if(i == 0 || i == 4 || i == 9 || (j == 0 && i < 5) || (j == 4 && i > 4))
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
