#include "assinaturas.h"


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
	printf("///           2. Editar os dados de uma transação                         ///\n");
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
        regPag();
        break;
      case '2':
        editPag();
        break;
    }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}


void regPag(void){
  Cliente* clt;
	char* cpf;

	cpf = telaRegPag();
	clt = buscarCliente(cpf);
	if (clt == NULL) {
    	printf("\n\nCliente não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		clt = telaInfoPag();
		strcpy(clt->cpf, cpf);
		regravarCliente(clt);
		free(clt);
	}
	free(cpf);
}


void editPag(void){
  Cliente* clt;
	char* cpf;

	cpf = telaRegPag();
	clt = buscarCliente(cpf);
	if (clt == NULL) {
    	printf("\n\nCliente não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		clt = telaInfoPag();
		strcpy(clt->cpf, cpf);
		regravarCliente(clt);
		free(clt);
	}
	free(cpf);
}


char* telaRegPag(void) {
	char* cpf;
  cpf = (char*) malloc(12*sizeof(char));

  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Editar Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
  printf("///                                                                       ///\n");
	printf("///           Informe o CPF do cliente:                                   ///\n");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return cpf;
}


Cliente* telaInfoPag(void) {
  Cliente* clt;
  clt = (Cliente*) malloc(sizeof(Cliente));
  
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Registrar transação = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Total a pagar:                                              ///\n");
  scanf("%f", &clt->precoPag);
  getchar();
	printf("///           Forma de pagamento(à vista ou a prazo):                     ///\n");
  scanf(" %12[^\n]", clt->tipoPag);
  getchar();
	printf("///           Prazo(meses):                                               ///\n");
  scanf("%d", &clt->prazo);
  getchar();
	printf("///           Quantidade paga:                                            ///\n");
  scanf("%f", &clt->qntPag);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return clt;
}


char* telaEditPag (void) {
  char* cpf;
  cpf = (char*) malloc(12*sizeof(char));
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = Alterar pagamento = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do cliente que deseja alterar:                ///\n");
  scanf("%[0-9]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return cpf;
}
