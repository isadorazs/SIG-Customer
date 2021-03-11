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


char menuCliente(void) {
	char op;
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
	printf("///           0. Voltar ao menu principal                                 ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  	scanf("%c", &op);
	getchar();
  printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
    return op;
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
	printf("///           2. Registrar recebimento de um produto                      ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  scanf("%c", &op);
	getchar();
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
	printf("///           3. Excluir um pagamento                                     ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	scanf("%c", &op);
	getchar();
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
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
    return op;
}


  void telaCadastrarCliente(void) {
	char nome[51];
	char cpf[11];
	char endereço[51];
	char nasc[11];
	char celular[12];
    system("clear || cls");
	printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Cliente = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome:                                                       ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("///           CPF:                                                        ///\n");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///           Endereço:                                                   ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", endereço);
	getchar();
	printf("///           Data de Nascimento:                                         ///\n");
	scanf("%[0-9/]", nasc);
	getchar();
	printf("///           Telefone:                                                   ///\n");
	scanf("%12[0-9]",celular);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
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
	printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Buscar Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite o CPF do cliente:                                    ///\n");
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


void telaAtualProd(void) {
    system("clear || cls");
	printf("\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Pesquisar produto = = = = = = =            ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite o nome do produto a ser atualizado                   ///\n");
	printf("///           Quantas unidades a mais?                                    ///\n");
  	printf("///           Quantas unidades a menos?                                   ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}