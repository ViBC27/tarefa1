#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void echo(int nf, int ht, double valor_ht){

  printf("NUMBER = %d\n", nf);
  printf("SALARY = R$ %.2lf\n", ht * valor_ht);

}

int main(){

  int nf, ht; // Números dos funcionários e horas trabalhadas.
  scanf("%d %d", &nf, &ht);

  double valor_ht; // Valor da hora trabalhada.
  scanf("%lf", &valor_ht);

  echo(nf, ht, valor_ht);

  return 0;
}
