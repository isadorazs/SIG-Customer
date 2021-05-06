#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_pag.h"
#include "mod_cliente.h"
#include "validacao.h"


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
	printf("///           3. Pesquisar Transações                        ///\n");
	printf("///           4. Listar Transações                        ///\n");
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
      case '3':
        pesquisarPag();
        break;
      case '4':
        listarPag();
        break;
    }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}


void regPag(void){
  Pagamento *pag;

  pag = telaInfoPag();
  salvaPag(pag);
  free(pag);
}

void pesquisarPag(void){
  Pagamento* pag;
	char* cpf;

	cpf = telaPesquisarPag();
	pag = buscarPag(cpf);
	exibirPag(pag);
	free(pag); 
	free(cpf);
}


void editPag(void){
  Pagamento* pag;
	char* cpf;

	cpf = telaEditPag();
  pag = buscarPag(cpf);
	if (cpf == NULL) {
    	printf("\n\nPagamento não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		cpf = telaInfoPag();
		strcpy(pag->cpf, cpf);
		regravarPag(pag);
		free(pag);
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


Pagamento* telaInfoPag(void) {
  Pagamento *pag;
  pag = (Pagamento*) malloc(sizeof(Pagamento));
  
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Registrar transação = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Total a pagar:                                              ///\n");
  scanf("%f", &pag->pagTotal);
  getchar();
 do {
	  printf("///           CPF (apenas números):                                       ///\n");
	  scanf("%[^\n]", pag->cpf);
    getchar();
  } while (!validarCPF(pag->cpf));
	printf("///           Forma de pagamento(à vista ou a prazo):                     ///\n");
  scanf(" %12[^\n]", pag->tipoPag);
  getchar();
	printf("///           Prazo(meses):                                               ///\n");
    scanf("%d", &pag->meses);
	printf("///           Quantidade paga:                                            ///\n");
  scanf("%f", &pag->quantPag);
  pag->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return pag;
}

void salvaPag(Pagamento* pag) {
  FILE* fp;
  fp = fopen("pagamento.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  fwrite(pag, sizeof(Pagamento), 1, fp);
  fclose(fp);
}

void listarPag(void){
	FILE* fp;
	Pagamento* pag;
	fp = fopen("pagamento.dat", "rb");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
		printf("Não é possível continuar o programa...\n");
		exit(1);
	}
	printf("\n\n");
	printf("========================== \n");
	printf("==  Lista de cadastros  ==\n");
	printf("========================== \n");
	pag = (Pagamento*) malloc(sizeof(Pagamento));
	while(fread(pag, sizeof(Pagamento), 1, fp)) {
		if (pag->status == 1) {
			exibirPag(pag);
		}
	}
	fclose(fp);
	free(pag);
	printf("\nPressione enter para voltar");

	getchar();
}

void exibirPag(Pagamento* pag){
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = =  Dados do Produto = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("             Total: %.2f\n", pag->pagTotal);
  printf("             CPF: %s\n", pag->cpf);
  printf("             Tipo de pagamento: %s\n", pag->tipoPag);
  printf("             Prazo (meses): %.2d\n", pag->meses);
  printf("             Quantidade paga: %.2f\n", pag->quantPag);
  printf("             Status: %d\n", pag->status);
  printf("///");
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}




char* telaEditPag(void) {
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

char* telaPesquisarPag(void) {
  char* cpf;
  cpf = (char*) malloc(12*sizeof(char));

	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = Pesquisar Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do cliente:                                   ///\n");
  scanf("%[0-9]", cpf);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  return cpf;
}

Pagamento* buscarPag(char* cpf) {
	FILE* fp;
	Pagamento* pag;

	pag = (Pagamento*) malloc(sizeof(Pagamento));
	fp = fopen("pagamento.dat", "rb");
	if (fp == NULL) {
		printf("Não foi possível encontrar o cliente solicitado...");
	}
	while(fread(pag, sizeof(Cliente), 1, fp)) {
		if ((strcmp(pag->cpf, cpf) == 0) && (pag->status == True)) {
			fclose(fp);
			return pag;
    } 
	}
	fclose(fp);
	return pag;
}

void regravarPag(Pagamento* pag) {
	int achou;
	FILE* fp;
	Pagamento* pagLido;
	pagLido = (Pagamento*) malloc(sizeof(Pagamento));
	fp = fopen("pagamento.dat", "rb");
	if (fp == NULL) {
		printf("Não foi possível encontrar o arquivo solicitado...");
    printf("\n\nTecle ENTER para continuar!\n\n");
	  getchar();
    exit(1);
	}
	achou = False;
	while(fread(pagLido, sizeof(Pagamento), 1, fp) && !achou) {
		if (strcmp(pagLido->cpf, pag->cpf) == 0) {
			achou = True;
			fseek(fp, 1*sizeof(Pagamento), SEEK_CUR);
      fwrite(pag, sizeof(Pagamento), 1, fp);
		}
	}
	fclose(fp);
	free(pagLido);
}