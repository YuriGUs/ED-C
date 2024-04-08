#include <stdio.h>

int main() {
  float z = 2.5;
  float *fp; // trash value

  fp = &z;

  printf("*&z = %f\n", *&z); // pega o conteudo(*) de z, não é utilizado
  printf("*fp = %f\n", *fp);
  printf("**&fp = %f\n", **&fp);
}


// z tipo float recebe 2.5
// fp é um ponteiro tipo float que recebe o endereço de z