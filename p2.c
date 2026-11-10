#include <stdio.h>
int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int numero;

    if (scanf("%d", &numero) == 1) {
        if (esPrimo(numero)) {
            printf("Primo\n");
        } else {
            printf("No primo\n");
        }


    }

    return 0;
}
