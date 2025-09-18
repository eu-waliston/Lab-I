Laborat ório de Programação I – Profa. Patrícia Pitthan – Testes de mesa (operadores)
Faça o teste de mesa de cada um dos programas abaixo, identificando os valores de suas saídas.
Na sequência, edite, compile e execute cada um deles para efetuar a correção. Todos os
programas utilizam a biblioteca stdio.h.

1)
int main() {
 int x = 5, y = 5;
 ++x;
 y--;
 printf("x = %d, y = %d\n", x, y);
 return 0;
}
------------------------------------------------------------
2)
int main() {
 int x = 5, y = 5;
 x++;
 --y;
 printf("x = %d, y = %d\n", x, y);
 return 0;
}
------------------------------------------------------------
3)
int main() {
 int x = 5, y, z;
 y = ++x + 2;
 z = x-- + 2;
 printf("x = %d, y = %d, z = %d\n", x, y, z);
 return 0;
}
------------------------------------------------------------
4)
int main() {
 int x = 5, y, z;
 y = x++ + 2;
 z = --x + 2;
 printf("x = %d, y = %d, z = %d\n", x, y, z);
 return 0;
}
------------------------------------------------------------
5)
int main() {
 printf("%d\n", 1==2);
 printf("%d\n", 1!=2);
 printf("%d\n", 1<2);
 printf("%d\n", 1>2);
 printf("%d\n", 9-2<=2*3+1);
 return 0;
}
------------------------------------------------------------
6)
int main() {
 printf("%d\n", !0);
 printf("%d\n", !9);
 printf("%d\n", 1&&0);
 printf("%d\n", 0||1);
 printf("%d\n", 2<3 || 3<2);
 return 0;
}
------------------------------------------------------------
7)
int main() {
int x;
int y;
int z;
x = 10;
y = -20;
z = x-y;
printf("Resultado 1 = %d\n", z);
z = y+x;
printf("Resultado 2 = %d\n", z);
z = z/(x/5);
printf("Resultado 3 = %d\n", z);
return(0);
}
------------------------------------------------------------
8)
int main() {
float result, a = 1, b = 2, c = 3, d = 7, e = 8;
result = (b-(c*7))/(4-(a*c*a));
printf("%.2f", result);
return 0;
}
------------------------------------------------------------
9)
int main() {
int i = 10, j = 18;
printf("%.2f", ((++i + j++)/2.0));
return 0;
}
------------------------------------------------------------
10)
int main() {
int x = 7;
printf("%d",++x%2);
return 0;
}