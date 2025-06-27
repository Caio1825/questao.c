#include <stdio.h>
int main() {
   float telefone,idade;
   char Nome [50];
   char Endereço [50];
   printf("Me informe seu Nome: ");
   scanf("%s",&Nome);
   printf("Sua Idade: ");
   scanf("%f",&idade);
   printf("Sua Rua: ");
   scanf("%s",&Endereço);
   printf("E seu Telefone: ");
   scanf("%f",&telefone);
   printf("Seu nome é %s , você tem  anos %.1f, mora na rua %s e seu telefone é %.1f",Nome,idade,Endereço,telefone);
    return 0;
}
