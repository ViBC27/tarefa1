#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int segundos(int n){

  int id_sg = n * 365 * 24 * 3600;

  printf("%d\n", id_sg);

}

int main(){

  int n;
  scanf("%d", &n);

  segundos(n);

  return 0;
}
