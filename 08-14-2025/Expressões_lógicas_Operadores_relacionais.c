#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("%d == %d ? %d\n", a, b, a == b);  // falso -> 0
    printf("%d != %d ? %d\n", a, b, a != b);  // verdadeiro -> 1
    printf("%d > %d ? %d\n", a, b, a > b);    // 0
    printf("%d < %d ? %d\n", a, b, a < b);    // 1
    printf("%d >= %d ? %d\n", a, b, a >= b);  // 0
    printf("%d <= %d ? %d\n", a, b, a <= b);  // 1

    return 0;
}
