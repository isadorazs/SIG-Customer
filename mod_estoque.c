#include "assinaturas.h"


void telaRegProd(void) {
  Estoque* produtos;
  produtos = (Estoque*) malloc(sizeof(Estoque));
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = Registrar um novo produto = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual produto chegou:                                        ///\n");
  scanf("%20[^\n]", produtos->produto);
  getchar();
  printf("///           Código:                                                     ///\n");
  scanf("%d", &produtos->cod);
  getchar();
	printf("///           Quantas unidades:                                           ///\n");
  scanf("%d", &produtos->und);
  getchar();
	printf("///           Qual o preço(R$):                                           ///\n");
  scanf("%f", &produtos->preco);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
 salvaEstoque(produtos);
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaPesquisarProd(void) {
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Pesquisar produto = = = = = = =            ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual Produto você deseja encontrar?                         ///\n");
	printf("///                                                                       ///\n");
 	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaExcProduto (void) {
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Dados de pagamento = = = = = = =              ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual produto você deseja excluir?:                          ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void telaExibeEstoque(Estoque* produtos){
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Dados do Produto = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("              Nome: %s\n", produtos->produto);
  printf("              Código: %d\n", produtos->cod);
  printf("              Unidades: %d\n", produtos->und);
  printf("              Preço(Und): %f\n", produtos->preco);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
}


void salvaEstoque(Estoque* produtos) {
  FILE* fp;
  fp = fopen("produtos.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  fwrite(produtos, sizeof(Estoque), 1, fp);
  fclose(fp);
}


void listarEstoque(void){
	FILE* fp;
	Estoque* produtos;
	fp = fopen("produtos.dat", "rb");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
		printf("Não é possível continuar o programa...\n");
		exit(1);
	}
	printf("\n\n");
	printf("========================== \n");
	printf("==  Lista de cadastros  ==\n");
	printf("========================== \n");
	produtos = (Estoque*) malloc(sizeof(Estoque));
	while(fread(produtos, sizeof(Estoque), 1, fp)) {
		if (produtos->status == '1') {
			telaExibeEstoque(produtos);
		}
	}
	fclose(fp);
	free(produtos);
	printf("\nPressione enter para voltar");

	getchar();
}