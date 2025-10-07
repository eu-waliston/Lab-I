#include <stdio.h>

int main() {
    int x = 5;

    x += 2; // equivale a x = x + 2
    printf("x += 2 -> %d\n", x);

    x -= 3; // equivale a x = x - 3
    printf("x -= 3 -> %d\n", x);

    x *= 4; // equivale a x = x * 4
    printf("x *= 4 -> %d\n", x);

    x /= 2; // equivale a x = x / 2
    printf("x /= 2 -> %d\n", x);

    x %= 3; // equivale a x = x % 3
    printf("x %%= 3 -> %d\n", x);

    return 0;
}
