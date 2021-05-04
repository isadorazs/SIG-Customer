#include "assinaturas.h"

char menuEstoque(void) {
	char op;
  system("clear || cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Menu Estoque = = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo produto                                ///\n");
	printf("///           2. Pesquisar um produto no estoque                          ///\n");
  printf("///           3. Editar um produto                                        ///\n");
	printf("///           4. Excluir um produto                                       ///\n");
  printf("///           5. Listar produtos                                          ///\n");
	printf("///           0. Voltar ao menu principal                                 ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	scanf("%c", &op);
	getchar();
  
    switch (op){
      case '1':
        regProd();
        break;
      case '2':
        pesquisarProd();
        break;
      case '3':
        editProd();
        break;
      case '4':
        excProd();
        break;
      case '5':
        listarEstoque();
        break;
    }
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}


void regProd(void){
  Estoque *produtos;

  produtos = telaRegProd();
  salvaEstoque(produtos);
  free(produtos);
}


void pesquisarProd(void){
  Estoque* produtos;
	char* cod;

	cod = telaPesquisarProd();
	produtos = buscarProd(cod);
	exibirProd(produtos);
	free(produtos); 
	free(cod);
}


void editProd(){
  Estoque* produtos;
	char* cod;

	cod = telaEditProd();
	produtos = buscarProd(cod);
	if (produtos == NULL) {
    	printf("\n\nProduto não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		produtos = telaRegProd();
		strcpy(produtos->cod, cod);
		regravarProd(produtos);
		free(produtos);
	}
	free(cod);
}


void excProd(void){
  Estoque* produtos;
	char *cod;

	cod = telaExcProd();
	produtos = (Estoque*) malloc(sizeof(Estoque));
	produtos = buscarProd(cod);
	if (produtos == NULL) {
    	printf("\n\nProduto não encontrado!\n\n");
 }else {
		  produtos->status = 1;
		  regravarProd(produtos);
		  free(produtos);
	}
	free(cod);

}


Estoque* telaRegProd(void) {
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
  scanf(" %20[^\n]", produtos->produto);
  getchar();
  printf("///           Código:                                                     ///\n");
  scanf(" %[^\n]", produtos->cod);
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
  printf("\t\t\t>>> Registro concluído com sucesso!\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return produtos;
}


char* telaPesquisarProd(void) {
  char* cod;
  cod = (char*) malloc(5*sizeof(char));

  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Pesquisar produto = = = = = = =            ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual o código do produto você deseja encontrar?             ///\n");
  scanf("%[0-9]", cod);
  getchar();
	printf("///                                                                       ///\n");
 	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  return cod;
}


char* telaEditProd(void){
  char* cod;
  cod = (char*) malloc(5*sizeof(char));

  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Editar Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
	printf("///           Informe o código do produto:                                ///\n");
	scanf("%[0-9]", cod);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return cod;
}


char* telaExcProd(void) {
  char *cod;
  cod = (char*) malloc(5*sizeof(char));
  
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Dados de pagamento = = = = = = =              ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual o código do produto você deseja excluir?               ///\n");
  scanf("%[0-9]", cod);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  return cod;
}

void exibirProd(Estoque* produtos){
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Dados do Produto = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("              Nome: %s\n", produtos->produto);
  printf("              Código: %s\n", produtos->cod);
  printf("              Unidades: %d\n", produtos->und);
  printf("              Preço(Und): %.2f\n", produtos->preco);
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
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


Estoque* buscarProd(char* cod) {
	FILE* fp;
	Estoque* produtos;

	produtos = (Estoque*) malloc(sizeof(Estoque));
	fp = fopen("produtos.dat", "rb");
	if (fp == NULL) {
		printf("Não foi possível encontrar o produto solicitado...");
	}
	while(fread(produtos, sizeof(Estoque), 1, fp)) {
		if ((strcmp(produtos->cod, cod) == 0) && (produtos->status == True)) {
			fclose(fp);
			return produtos;
		}
	}
	fclose(fp);
	return produtos;
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
		if (produtos->status == 1) {
			exibirProd(produtos);
		}
	}
	fclose(fp);
	free(produtos);
	printf("\nPressione enter para voltar");

	getchar();
}


void regravarProd(Estoque* produtos) {
	int achou;
	FILE* fp;
	Estoque* prodLido;

	prodLido = (Estoque*) malloc(sizeof(Estoque));
	fp = fopen("produtos.dat", "r+b");
	if (fp == NULL) {
		printf("Não foi possível encontrar o produto solicitado...");
    printf("\n\nTecle ENTER para continuar!\n\n");
	  getchar();
    exit(1);
	}
	achou = False;
	while(fread(prodLido, sizeof(Estoque), 1, fp) && !achou) {
		if (strcmp(prodLido->cod, produtos->cod) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Estoque), SEEK_CUR);
      fwrite(produtos, sizeof(Estoque), 1, fp);
		}
	}
	fclose(fp);
	free(prodLido);
}