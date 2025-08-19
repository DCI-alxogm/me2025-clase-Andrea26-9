#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, discr, real, imag;

    // Solicitar valores
    printf("Ingrese a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("Solucion trivial\n");
        } else {
            x1 = -c / b;
            printf("x = %.2f\n", x1);
        }
    } else {
        discr = b*b - 4*a*c;

        if (discr >= 0) {
            x1 = (-b + sqrt(discr)) / (2*a);
            x2 = (-b - sqrt(discr)) / (2*a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } else {
            printf("Las raices son complejas\n");
            real = -b / (2*a);
            imag = sqrt(fabs(discr)) / (2*a);
            printf("x1 = %.2f + %.2fi\n", real, imag);
            printf("x2 = %.2f - %.2fi\n", real, imag);
        }
    }

   
}