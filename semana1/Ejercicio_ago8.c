#include <stdio.h>
#include <math.h>

int main() { 
  
  float cal[5]; 
  cal [0] = 3.1;
  cal[1] = 5.6;
  cal [2] = 7.4; 
  cal [3] = 8.8;
  cal [4] = 9.1;


  printf("%f %f %f %f %f", cal[0], cal[1], cal[2], cal(3), cal[4]);
  printf("X² = %f %f %f %f %f\n", exp(cal[0]), exp(cal[1]), exp(cal[2]), exp(cal[3]), exp(cal[4]) );

  }