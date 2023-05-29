#include <stdio.h>
int numeros[100];
int n;
int i;
main() {
    do {
    printf("Ingrese el valor de n largo del arreglo: ");
    scanf("%d", &n);
    } while (n <= 1 || n > 100);

    for (i = 1; i <= n; i++) {
        numeros[i-1] = (i) * 2;
    }
    printf("Los %d primeros numeros pares son:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}
