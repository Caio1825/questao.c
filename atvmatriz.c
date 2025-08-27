QUESTÃO 63 
#include <stdio.h>
int main(void){
  int i,j;
  int num[2][2];
  for(i = 0;i < 2;i++){
    for(j = 0;j < 2;j++){
      printf("Elementos [%d][%d]:",i,j);
      scanf("%d",&num[i][j]);
    }
  }
printf("A matriz digitada é:\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%d",num[i][j]);
    }
    printf("\n");
  }
}
QUESTÃO 64
#include <stdio.h>
int main(void){
  int i,j;
  int num[3][3];
    for(i = 0;i < 3; i++){
      for(j = 0;j < 3;j++){
        printf("Elementos[%d][%d]: ",i,j);
      scanf("%d",&num[i][j]);
      }
    }

  printf("\n<<A matriz digitada>>\n");
  for(i = 0;i < 3; i++){
    for(j = 0;j < 3;j++){
      printf("%d ", num[i][j]);
    }
    printf("\n");
  }

  printf("<< Valores da Diagonal Principal >>\n");

  for(i = 0;i < 3; i++){
    for(j = 0;j < 3;j++){
      if(i==j){
        printf("%d ", num[i][j]);
      }
    }
  }
  }
Questão 65
#include <stdio.h>
int main(void){
  int num[2][3];
  int soma=0;
  for(int i=0;i < 2;i++){
    for(int j=0;j<3;j++){
      printf("Elementos[%d][%d]:", i,j);
      scanf("%d",&num[i][j]);
    }
  }
  printf("\n");
  for(int i=0;i < 2;i++){
    for(int j=0;j<3;j++){
      soma = soma + num[i][j];
    }
  }
  printf("A soma é igual: [%d]",soma);
}
Questão 66
#include <stdio.h>
int main(void){
  int num[3][3];
  int i,j,maior;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Elemento[%d][%d]:",i,j);
      scanf("%d",&num[i][j]);
    }
  }
  maior=num[0][0];
  for(i = 0;i < 3;i++){
    for(j = 0;j < 3;j++){
      if(num[i][j] > maior){
        maior=num[i][j];
    }
  }
 }
  printf("\n<<O Maior número>>\n");
  printf("O maior número é: %d",maior);
}

