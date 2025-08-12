#include <stdio.h>
#include <math.h>

int main () {
 float cali[5]; 
cali [0] = 7.1; 
cali [1] = 3.5; 
cali [2] = 4.6; 
cali [3] = 9.5;
cali [4] = 9.9; 
printf("%f %f %f %f %f\n", cali[0], cali[1], cali[2], cali[3], cali[4]); 
printf("x^2 = %f %f %f %f %f\n", exp (cali[0]),exp (cali[1]), exp (cali[2]), exp(cali[3]), exp(cali[4]) );
printf("log= %f %f %f %f %f\n", log (cali[0]), log (cali[1]), log (cali[2]), log (cali[3]), log (cali[4])); 
printf("exp(x)+ cos(x) = %f %f %f %f %f\n", (exp(cali[0]) + cos(cali[0]) ), (exp(cali[1]) + cos(cali[1]) ), (exp(cali[2]) + cos(cali[2]) ), (exp(cali[3]) + cos(cali[3]) ), (exp(cali[4]) + cos(cali[4]) ));  

}