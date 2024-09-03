#include <stdio.h>

int pertence_fibonacci(int n) {
    if (n < 0) {
        return 0; 
    }
    int a = 0, b = 1;
    if (n == a || n == b) {
        return 1; 
    }
    while (b < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (b == n);
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (pertence_fibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
