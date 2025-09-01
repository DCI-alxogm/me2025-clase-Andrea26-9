#include <stdio.h>
#include <math.h>

double factorial(int n) {
    double f = 1.0;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

double aproximarTaylor(int opcion, double x, double error_max) {
    double suma = 0.0, termino, valor_real;
    int n = 0;

    switch (opcion) {
        case 1: valor_real = sin(x); break;
        case 2: valor_real = cos(x); break;
        case 3: valor_real = exp(x); break;
        case 4: valor_real = log(1 + x); break;   
        case 5: valor_real = 1.0 / (1 - x); break; 
        default: 
            printf("Opcion invalida.\n");
            return 0;
    }

    do {
        switch (opcion) {
            case 1: // sin(x)
                termino = pow(-1, n) * pow(x, 2*n + 1) / factorial(2*n + 1);
                break;
            case 2: // cos(x)
                termino = pow(-1, n) * pow(x, 2*n) / factorial(2*n);
                break;
            case 3: // exp(x)
                termino = pow(x, n) / factorial(n);
                break;
            case 4: // ln(1+x)
                if (n == 0) {
                    termino = 0;
                } else {
                    termino = pow(-1, n+1) * pow(x, n) / n;
                }
                break;
            case 5: // 1/(1-x)
                termino = pow(x, n);
                break;
        }

        suma += termino;
        n++;
    } while (fabs(valor_real - suma) > error_max);

    printf("Aproximacion: %.10f\n", suma);
    printf("Valor real  : %.10f\n", valor_real);
    printf("Error       : %.10f\n", fabs(valor_real - suma));
    printf("Iteraciones : %d\n", n);

    return suma;
}

int main() {
    int opcion;
    double x, error_max;

    printf("Seleccione la funcion a aproximar:\n");
    printf("1. sin(x)\n");
    printf("2. cos(x)\n");
    printf("3. exp(x)\n");
    printf("4. ln(1+x)\n");
    printf("5. 1/(1-x)\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    printf("Ingrese el error maximo permitido: ");
    scanf("%lf", &error_max);

    aproximarTaylor(opcion, x, error_max);

    
}
