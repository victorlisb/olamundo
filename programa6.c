#include <stdio.h>

int main() {
    int n;
    float soma = 0.0;

    printf("Digite um valor inteiro e positivo para n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O valor de n precisa ser positivo e diferente de zero.\n");
        return 1;  // Retorna 1 para indicar erro
    }

    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    printf("Soma da serie S = 1 + 1/2 + 1/3 + ... + 1/%d = %.2f\n", n, soma);

    return 0;
}
