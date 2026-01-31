#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 7; j++) {
            if(i == 0 || i == 9 || j == 0 || j == 6)
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
