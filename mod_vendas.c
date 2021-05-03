#include "assinaturas.h"


char menuVendas(void) {
	char op;
  system("clear || cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
	printf("///           = = = = = = = = Menu Vendas = = = = = = = =                 ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Registrar uma nova venda                                 ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  scanf("%c", &op);
	getchar();
  
    switch (op){
      case '1':
        cadVenda();
        break;
    }
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}


void cadVenda(void){
  Estoque* produtos;
	char* cod;

	cod = telaCadVenda();
	produtos = buscarProd(cod);
	if (produtos == NULL) {
    	printf("\n\nProduto não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		produtos = telaInfoVenda();
		strcpy(produtos->cod, cod);
		regravarProd(produtos);
		free(produtos);
	}
	free(cod);
}


char* telaCadVenda(void) {
  char* cod;
  cod = (char*) malloc(5*sizeof(char));
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Registrar Venda = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Código do produto vendido:                                  ///\n");
  scanf(" %[^\n]", cod);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return cod;
}


Estoque* telaInfoVenda(void){
  Estoque* cod;
  cod = (Estoque*) malloc(sizeof(Estoque));
  
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
	printf("///           = = = = = = = Registrar venda = = = = = = =                 ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = =                 ///\n");
	printf("///                                                                       ///\n");
	printf("///           Preço da venda:                                             ///\n");
  scanf("%f", &cod->precoVenda);
  getchar();
	printf("///           Quantas unidades:                                           ///\n");
  scanf("%d", &cod->undVenda);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return cod;
}