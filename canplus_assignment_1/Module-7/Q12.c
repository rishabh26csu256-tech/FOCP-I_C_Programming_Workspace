#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 12) {
        printf("Invalid input. n must be between 1 and 12.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {
        
            printf("%d", i * j);
            
            if (j < n) {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}