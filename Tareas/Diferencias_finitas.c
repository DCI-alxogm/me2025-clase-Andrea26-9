#include <stdio.h>

int main() {
    double x0 = 0, f0 = 1.2;
    double x1 = 0.5, f1 = 0.925;
    double x2 = 1, f2 = 0.2;
    double d = 0.5; 
    double adelante = (f2 - f1) / d;    
    double atras = (f1 - f0) / d;        
    double centrada = (f2 - f0) / (2 * d); 

    printf("Derivada en x=0.5:\n");
    printf("adelante: %.6f\n", adelante);
    printf("atras: %.6f\n", atras);
    printf("centrada: %.6f\n", centrada);
    
} 
