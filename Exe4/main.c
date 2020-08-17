#include <stdlib.h>
#include <stdio.h>

//Escreva um programa que solicite uma distância em metros, e em seguida a imprima em //decímetros, centímetros e milímetros.

int main() {
  int metros = 0;

  printf("Digite a distância em metros para calcular em decímetros, centímetros e milímetros:");
  scanf("%i", &metros);

  printf("A distância informada foi %i metro(s)\n", metros);
  printf("%i decímetro(s) \n", metros*10);
  printf("%i centímetro(s) \n", metros*100);
  printf("%i milímetro(s)", metros*1000);
}