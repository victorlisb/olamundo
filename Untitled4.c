#include <stdio.h>
#include <stdbool.h>

// Fun��o para verificar se um n�mero � primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false; // Encontrou um divisor, n�o � primo
        }
    }

    return true; // Nenhum divisor encontrado, � primo
}

int main() {
    printf("Numeros primos entre 1 e 100:\n");

    // Loop de 1 a 100 para encontrar e imprimir n�meros primos
    for (int i = 1; i <= 100; ++i) {
        if (ehPrimo(i)) {
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
