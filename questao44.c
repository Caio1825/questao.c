#include <stdio.h>

int main() {
float num1,num2,num3,maior=0,menor=0,inter=0;
printf("Digite o primeiro número:");
scanf("%f",&num1);
printf("Digite o segundo número:");
scanf("%f",&num2),
printf("Digite o terceiro número:");
scanf("%f",&num3);
num1=maior;
if((num1 != num2)&&(num2 > num3)){
    maior = num2;
}else((num1 > num2)&&(num1 != num3));{
    maior = num3;
};
 if((num1 <= num2) && (num1 <= num3)){
    menor += num1;
  }else if((num2 <= num1) && (num2 <= num3)){
    menor += num2;
    } else {
    menor += num3;
  };
inter= num1 + num2 + num3 - maior - menor;
printf("O maior número é: %1.1f",maior);
printf("\nO menor número é: %1.1f",menor);
printf("\nO intermediario número é: %1.1f",inter);
    return 0;
}
