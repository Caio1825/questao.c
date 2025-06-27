#include <stdio.h>
int main() {
  float num1,num2;
    printf("Digite um temperatura em Fahrenheit:\n");
    scanf("%f",&num1);
    num2 = num1 - 32*5/9;
    printf("A temperatura em Celsius é de: %1.1f", num2);

    return 0;
}
