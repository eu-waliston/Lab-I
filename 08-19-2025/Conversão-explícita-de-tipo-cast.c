#include <stab.h>

int main() {
    int a = 5, b = 2, c;
    float d,e,f;

    d = a/b;
    e = (float)a/b;
    f = a/(float)b;
    c = a/(int)f;

    printf("d = %f, e = %f, f = %f, c = %d", d,e,f,c);

    return 0;
}