#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // printing spaces
        for(int j = 1; j <=n-i; j++) {
            printf("  ");
        }

        // printing stars
        for(int j = 2; j <= (2*(i-1)); j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

