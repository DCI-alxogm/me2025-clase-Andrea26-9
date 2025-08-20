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
            printf("x = %f\n", x1);
        }
    } else {
        discr = b*b - 4*a*c;

        if (discr >= 0) {
            x1 = (-b + sqrt(discr)) / (2*a);
            x2 = (-b - sqrt(discr)) / (2*a);
            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        } else {
            printf("Las raices son complejas\n");
            real = -b / (2*a);
            imag = sqrt(fabs(discr)) / (2*a);
            printf("x1 = %f + %fi\n", real, imag);
            printf("x2 = %f - %fi\n", real, imag);
        }
    }

   
}