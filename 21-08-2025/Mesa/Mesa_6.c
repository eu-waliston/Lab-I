#include <stdio.h>

int main() {
 printf("%d\n", !0);
 printf("%d\n", !9);
 printf("%d\n", 1&&0);
 printf("%d\n", 0||1);
 printf("%d\n", 2<3 || 3<2);
 return 0;
}