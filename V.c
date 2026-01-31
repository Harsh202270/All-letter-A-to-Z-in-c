#include <stdio.h>

int main() {
    int i, j;
    int rows = 10, cols = 9;

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(j == i && i < rows - 1)
                printf("1");
            else if(j == cols - 1 - i && i < rows - 1)
                printf("1");
            else if(i == rows - 1 && j == rows/2)
                printf("1");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
