#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 20) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("*");
            }
            printf("\n");    
        }
        return 0;
    }
    else {
        printf("Invalid\n");
    }
}
