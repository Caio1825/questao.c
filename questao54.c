#include <stdio.h>
int main(void){
  int nota=0,quantidade=0;float media=0;
   float media_art;
  while(nota >= 0){
    printf("Digite sua nota: ");
    scanf("%d",&nota);
    if(nota >=0){
      media += nota;
      quantidade++;
    } 
        } 
  media_art =media / quantidade;
  printf("\nA media das notas digitadas é:%1.1f", media_art);
  return 0;}
