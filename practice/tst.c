#include <stdio.h>

int main() {
    int m = 5;
    printf("%d ", m++);
    printf("%d ", ++m);
    printf("%d", m--);

    for(int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    
    return 0;
}