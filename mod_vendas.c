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
        telaCadVenda();
        break;
    }
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}


void telaCadVenda(void) {
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Registrar Venda = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Código do produto vendido:                                  ///\n");
	printf("///           CPF do cliente:                                             ///\n");
	printf("///           Preço do produto:                                           ///\n");
	printf("///           Data de venda:                                              ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}