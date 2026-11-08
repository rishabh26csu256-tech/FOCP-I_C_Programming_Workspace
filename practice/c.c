#include <stdio.h>
int main() {
    int count = 0, num = 0;
    while (num < 12) {
        num += 2;
        if (num % 4 == 0) {
            continue;
        }
        count++;
        printf("%d:%d ", num, count);
    }
    return 0;
}