#include <stdio.h>

int main() {
int lado1,lado2,lado3;
printf("Digite o 1 lado:");
scanf("%d",&lado1);
printf("Digite o 2 lado:");
scanf("%d",&lado2);
printf("Digite o 3 lado:");
scanf("%d",&lado3);
if((lado1 == lado2) && (lado2 == lado3)){
    printf("Esse triângulo é equilatero");
}
if((lado1 == lado2)&&(lado2 != lado3)){
    printf("Esse triângulo é isósceles");
}
if((lado1 != lado) && (lado2 != lado3)){
    printf("Esse triângulo é escaleno");
}

    return 0;
}
