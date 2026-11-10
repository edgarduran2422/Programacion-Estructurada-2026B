#include <stdio.h>
int buscar(int arreglo[], int tamano, int valor) {
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == valor) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arreglo[1000];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arreglo[i]);
        }

        int valor;
        scanf("%d", &valor);
        printf("%d\n", buscar(arreglo, n, valor));
    }

    return 0;
}
