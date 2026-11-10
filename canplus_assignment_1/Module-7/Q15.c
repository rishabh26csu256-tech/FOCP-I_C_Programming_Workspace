#include <stdio.h>

int main() {
    int n;

    printf("Enter odd integer n: ");
    if (scanf("%d", &n) != 1 || n < 3 || n > 19 || n % 2 == 0) {
        printf("Invalid input. n must be an odd integer between 3 and 19.\n");
        return 1;
    }

    int mid = (n + 1) / 2;


    for (int i = 1; i <= mid; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
    
        int spaces = 2 * (mid - i);
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        

        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    
    for (int i = mid - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
    
        int spaces = 2 * (mid - i);
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        
      
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}