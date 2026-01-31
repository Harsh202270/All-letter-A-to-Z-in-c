#include <stdio.h>

int main() {
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {

            if(j == 0 || j == 9 || (i >= 5 && j == i - 5) || (i >= 5 && j == 14 - i))
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
