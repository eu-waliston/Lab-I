#include <stdio.h>

int main() {
    int p, q;

    printf("Tabela verdade AND (&&):\n");
    for(p = 0; p <= 1; p++) {
        for(q = 0; q <= 1; q++) {
            printf("%d && %d = %d\n", p, q, p && q);
        }
    }

    printf("\nTabela verdade OR (||):\n");
    for(p = 0; p <= 1; p++) {
        for(q = 0; q <= 1; q++) {
            printf("%d || %d = %d\n", p, q, p || q);
        }
    }

    printf("\nOperador NOT (!):\n");
    printf("!0 = %d\n", !0);
    printf("!1 = %d\n", !1);

    return 0;
}
