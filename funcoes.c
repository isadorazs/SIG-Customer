
#include "assinaturas.h"

char menuPrincipal(void) {
	char op;
  system("clear || cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Módulo Cliente                                           ///\n");
  printf("///           2. Módulo Vendas                                            ///\n");
  printf("///           3. Módulo Pagamentos                                        ///\n");
	printf("///           4. Módulo Estoque                                           ///\n");
	printf("///           0. Encerrar o programa                                      ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  scanf("%c", &op);
	getchar();
  printf("\n");
  return op;
}


void menuCliente(void) {
	char op='9';
while(op != '0'){
  system("clear || cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Menu Cliente = = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um Cliente                                     ///\n");
	printf("///           2. Pesquisar um Cliente                                     ///\n");
	printf("///           3. Atualizar um Cliente                                     ///\n");
	printf("///           4. Apagar um Cliente                                        ///\n");
  printf("///           5. Listar Clientes                                          ///\n");
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
        telaCadastrarCliente();
        break;
      case '2':
        telaBuscarCliente();
        break;
      case '3':
        telaEditCliente();
        break;
      case '4':
        telaExcCliente();
        break;
      case '5':
        listar();
    }
  }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();

}


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


char menuPagamento(void) {
	char op;
    system("clear || cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Menu Pagamentos = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar uma nova transação                             ///\n");
	printf("///           2. Pesquisar os dados de uma transação                      ///\n");
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
        telaCadPag();
        break;
      case '2':
        telaPesquisarPag();
        break;
    }
  printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}


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
	printf("///           3. Excluir um produto                                       ///\n");
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
        telaRegProd();
        break;
      case '2':
        telaPesquisarProd();
        break;
      case '3':
        telaExcProduto();
        break;
    }
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
    return op;
}


void telaCadastrarCliente(void){
  Cadastro* dados;
  dados = (Cadastro*) malloc(sizeof(Cadastro));
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Cliente = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome:                                                       ///\n");
	scanf(" %50[^\n]", dados->nome);
	printf("///           CPF:                                                        ///\n");
	scanf("%d", &dados->cpf);
	printf("///           Endereço:                                                   ///\n");
	scanf(" %50[^\n]", dados->endereco);
  printf("\n\n    Digite a data de nascimento");
  printf(" \n\n    Dia: ");
  scanf("%d", &dados->dd);
  printf("\n\n    Mês: ");
  scanf("%d", &dados->mm);
  printf("\n\n    Ano: ");
  scanf("%d", &dados->aa);
  /*while(!(valData(dados->dd, dados->mm, dados->aa))){
    printf("\n\n    Por favor digite uma data válida");
    printf("\n\n    Dia: ");
    scanf("%d", &dados->dd);
    printf("\n\n    Mês: ");
    scanf("%d", &dados->mm);
    printf("\n\n    Ano: ");
    scanf("%d", &dados->aa);
  }*/
	printf("///           Telefone:                                                   ///\n");
	scanf("%d", &dados->celular);
  dados->status = '1';
	printf("///                                                                       ///\n");
	printf("///           Cadastro concluído                                          ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  salvaDados(dados);
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
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
	printf("///           Produto vendido:                                            ///\n");
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


void telaCadPag(void) {
    system("clear || cls");
	printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Registrar transação = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Total a pagar:                                              ///\n");
	printf("///           Forma de pagamento:                                         ///\n");
	printf("///           A vista ou a prazo:                                         ///\n");
	printf("///           Cliente pagante:                                            ///\n");
	printf("///           Quantidade paga:                                            ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaRegProd(void) {
    system("clear || cls");
	printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = Registrar um novo produto = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual produto chegou:                                        ///\n");
	printf("///           Quantas unidades:                                           ///\n");
	printf("///           Qual o preço:                                               ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaBuscarCliente(void) {
  system("clear || cls");
  FILE *fp;
  Cadastro* dados;
  int achou;
  char buscar;
  fp = fopen("dados.dat", "r+b");
  if (fp == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
		printf("Não é possível continuar o programa...\n");
		exit(1);
  }
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Buscar Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite o nome do cliente:                                   ///\n");
  telaExibeCliente(dados);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaExcCliente(void) {
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = = Excluir Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite o CPF do cliente que deseja excluir:                 ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaEditCliente(void) {
	char op;
    system("clear || cls");
	printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Editar Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Qual informação deseja alterar?                             ///\n");
    printf("///                                                                       ///\n");
    printf("///           1. Nome                                                     ///\n");
    printf("///           2. CPF                                                      ///\n");
    printf("///           3. Endereço                                                 ///\n");
	printf("///           4. Data de Nascimento                                       ///\n");
	printf("///           5. Telefone                                                 ///\n");
    printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
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
void telaPesquisarPag (void) {
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Dados de pagamento = = = = = = =              ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Cliente pagante:                                            ///\n");
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
// função feita por @flaviusgorgonio
int valData(int dd, int mm, int aa) {
    int maiorDia;
    if (aa < 0 || mm < 1 || mm > 12 || dd < 1)
         return 0;
    if (mm == 2) {
         if (bissexto(aa)){
             maiorDia = 29;
        }else{
             maiorDia = 28;
        }
     } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
         maiorDia = 30;
     } else {
         maiorDia = 31;
        if (dd > maiorDia){
            return 0;
        }
    }
     return 1;
}

// função feita por @flaviusgorgonio
int bissexto(int aa) {
    if ((aa % 4 == 0) && (aa % 100 != 0)) {
         return 1;
     } else if (aa % 400 == 0) {
         return 1;
     } else {
         return 0;
     }
}

void salvaDados(Cadastro* dados) {
  FILE* fp;
  fp = fopen("dados.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  fwrite(dados, sizeof(Cadastro), 1, fp);
  fclose(fp);
}

void telaExibeCliente(Cadastro* dados){
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Dados do Cliente = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("              Nome: %s\n", dados->nome);
  printf("              Endereço: %s\n", dados->endereco);
  printf("              CPF: %d\n", dados->cpf);
  printf("              Celular: %d\n", dados->celular);
	printf("              Data de Nascimento: %d/%d/%d\n", dados->dd, dados->mm, dados->aa);
  printf("///");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
}
void listar(void){
	FILE* fp;
	Cadastro* dados;
	fp = fopen("dados.dat", "rb");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
		printf("Não é possível continuar o programa...\n");
		exit(1);
	}
	printf("\n\n");
	printf("========================== \n");
	printf("==  Lista de cadastros  ==\n");
	printf("========================== \n");
	dados = (Cadastro*) malloc(sizeof(Cadastro));
	while(fread(dados, sizeof(Cadastro), 1, fp)) {
		if (dados->status == '1') {
			telaExibeCliente(dados);
		}
	}
	fclose(fp);
	free(dados);
	printf("\nPressione enter para voltar");

	getchar();
}

