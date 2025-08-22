#include <stdio.h>
#include <math.h>

int main()
{
    float x, error, limite, exponente, actual = 1.0, anterior;
    int n = 1;

    printf("Valor de x: ");
    scanf("%f", &x);

    printf("Error máximo permitido: ");
    scanf("%f", &limite);

    do {
        anterior = actual;
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        exponente = pow(x, n) / fact;
        actual += exponente;
        error = ((actual - anterior) / actual) * 100.0;

        printf("n=%d  exponente=%f  aprox=%f  error=%f%%\n", n, exponente, actual, error);

        n++;
    } while (error > limite);

    printf("\nResultado: e^(%f) ≈ %f\n", x, actual);
    printf("Error alcanzado: %f%%\n", error);
    printf("Número de pasos = %d\n", n);

    
}
