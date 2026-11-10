#include <stdio.h>
int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a / b;
}

int main() {
    char operador;
    int a, b;

    if (scanf(" %c", &operador) == 1 && scanf("%d", &a) == 1 && scanf("%d", &b) == 1) {
        switch (operador) {
            case '+':
                printf("%d\n", sumar(a, b));
                break;
            case '-':
                printf("%d\n", restar(a, b));
                break;
            case '*':
                printf("%d\n", multiplicar(a, b));
                break;
            case '/':
                if (b == 0) {
                    printf("Error: division por cero\n");
                } else {
                    printf("%d\n", dividir(a, b));
                }
                break;
        }
    }

    return 0;
}
