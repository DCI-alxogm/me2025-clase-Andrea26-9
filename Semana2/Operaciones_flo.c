#include <stdio.h>
#include <math.h>

int main (){ 
 float a = 3; 
 float b = 4; 
 float c = 5; 
 float d = 7; 
  float e; 


 printf("e = %f\n", (a+b)*c/d); 
 printf("e = %f\n", ((a+b)*c/d)); 
 printf("e = %f\n", a+b*c/d); 
 printf ("e = %f\n", a+(b*c)/d); 
 }