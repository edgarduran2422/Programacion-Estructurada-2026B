#include <stdio.h>
int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", factorial(n));
    }

    return 0;
}
