int preço, npreço;
  printf("Digite o preço do produto:");
  scanf("%d",&preço);
  if(preço < 100){
    npreço  = preço * 1.10;
      printf("O preço do seu produto com juros foi de\n%d",npreço);};
  if(preço >= 100){
     npreço = preço * 1.20;
      printf("O preço do seu produto com juros foi de\n%d",npreço);};
