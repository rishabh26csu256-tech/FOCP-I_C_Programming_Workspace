#include <stdio.h>

int main() {
    int x = 7;
    int y = x++;
    int z = --x;

    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}