#include <stdio.h>

int main() {
    int l1,l2,l3,l4,areaTotal;
    printf("Somos especializados em terrenos retangulares");
    printf("\nMe diga os quatro lados:");
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);
    scanf("%d",&l4);
    areaTotal = l1*l2*l3*l4;
printf("A área total do terreno vai ficar: %d", areaTotal);
    return 0;
}
