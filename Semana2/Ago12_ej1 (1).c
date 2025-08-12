#include <stdio.h>
#include <math.h>

int main (){ 
  int numeros[5];
  float resultados[5];
  int indx; 
  numeros[0]  =1; 
  numeros [1] = 2; 
  numeros [2] = 3; 
  numeros [3] = 4; 
  numeros [4] = 5; 

  printf("x\t x^2\t log (x+1)\t exp(x)+ cos(x)\n") ; 
  for(indx=0; indx<5; indx++){
   // printf("%f\n", numeros[indx], numeros[indx]%2); 
    if(numeros[indx]%2==0){
    //  printf("%d%f\n", numeros[indx], log10(numeros[indx])+1);
  printf("%f%f %f %f\n", numeros[indx], numeros[indx]*numeros[indx],log10 (numeros[indx]+1) , exp(numeros[indx])+ cos(numeros[indx]));
  }else{
    printf("%d %f \n ", numeros[indx], exp(numeros[indx])+ cos(numeros[indx]));

}
}
}
