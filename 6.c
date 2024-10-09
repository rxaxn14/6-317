#include <stdio.h>

void fibonacci(int n, int *fib) {
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main() {
    int n;

    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    int fib[n];

    fibonacci(n, fib);

    printf("Serie de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}
