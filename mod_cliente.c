#include "assinaturas.h"

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
        cadastrarCliente();
        break;
      case '2':
        pesquisarCliente();
        break;
      case '3':
        editCliente();
        break;
      case '4':
        excCliente();
        break;
      case '5':
        listarCliente();
        break;
    }
  }
  printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void cadastrarCliente(void){
  Cliente *clt;

  clt = telaCadastrarCliente();
  salvaCliente(clt);
  free(clt);
}


void pesquisarCliente(void){
  Cliente* clt;
	char* cpf;

	cpf = telaPesquisarCliente();
	clt = buscarCliente(cpf);
	exibirCliente(clt);
	free(clt); 
	free(cpf);
}


void editCliente(void){
  Cliente* clt;
	char* cpf;

	cpf = telaEditCliente();
	clt = buscarCliente(cpf);
	if (clt == NULL) {
    	printf("\n\nCliente não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		clt = telaCadastrarCliente();
		strcpy(clt->cpf, cpf);
		regravarCliente(clt);
		free(clt);
	}
	free(cpf);
}


void excCliente(void){
  Cliente* clt;
	char *cpf;

	cpf = telaExcCliente();
	clt = (Cliente*) malloc(sizeof(Cliente));
	clt = buscarCliente(cpf);
	if (clt == NULL) {
    	printf("\n\nCliente não encontrado!\n\n");
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
 }else {
		  clt->status = False;
		  regravarCliente(clt);
		  free(clt);
	}
	free(cpf);

}


Cliente* telaCadastrarCliente(void){
  Cliente* clt;
  clt = (Cliente*) malloc(sizeof(Cliente));
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Cliente = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Nome:                                                       ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", clt->nome);
  getchar();
  do {
	  printf("///           CPF (apenas números):                                       ///\n");
	  scanf("%[^\n]", clt->cpf);
    getchar();
  } while (!validarCPF(clt->cpf));
  do{
    printf("\n\n    Digite a data de nascimento");
    printf(" \n\n    Dia: ");
    scanf("%d", &clt->dd);
    printf("\n\n    Mês: ");
    scanf("%d", &clt->mm);
    printf("\n\n    Ano: ");
    scanf("%d", &clt->aa);
  } while(!(valData(clt->dd, clt->mm, clt->aa)));
	printf("///           Telefone:                                                   ///\n");
	scanf("%d", &clt->celular);
  printf("///           Endereço:                                                   ///\n");
	scanf(" %50[^\n]", clt->endereco);
  clt->status = True;
	printf("///                                                                       ///\n");
	printf("///           Cadastro concluído                                          ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Cadastro concluído com sucesso!\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return clt;
}


char* telaPesquisarCliente(void) {
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


char* telaExcCliente(void) {
  char *cpf;
  cpf = (char*) malloc(12*sizeof(char));
  
  system("clear || cls");
	printf("\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///           = = = = = = = = Excluir Cliente = = = = = = =               ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite o CPF do cliente que deseja excluir:                 ///\n");
  scanf("%[0-9]", cpf);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  return cpf;
}


char* telaEditCliente(void) {
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


void exibirCliente(Cliente* clt){
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///           = = = = = = = =  Dados do Cliente = = = = = =               ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = =               ///\n");
  printf("///                                                                       ///\n");
  printf("              Nome: %s\n", clt->nome);
  printf("              Endereço: %s\n", clt->endereco);
  printf("              CPF: %s\n", clt->cpf);
  printf("              Celular: %d\n", clt->celular);
  printf("              Data de Nascimento: %d/%d/%d\n", clt->dd, clt->mm, clt->aa);
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\n");
  printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}


void salvaCliente(Cliente* clt) {
  FILE* fp;
  fp = fopen("cliente.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  fwrite(clt, sizeof(Cliente), 1, fp);
  fclose(fp);
}


Cliente* buscarCliente(char* cpf) {
	FILE* fp;
	Cliente* clt;

	clt = (Cliente*) malloc(sizeof(Cliente));
	fp = fopen("cliente.dat", "rb");
	if (fp == NULL) {
		printf("Não foi possível encontrar o cliente solicitado...");
	}
	while(fread(clt, sizeof(Cliente), 1, fp)) {
		if ((strcmp(clt->cpf, cpf) == 0) && (clt->status == True)) {
			fclose(fp);
			return clt;
    } 
	}
	fclose(fp);
	return clt;
}


void listarCliente(void){
	FILE* fp;
	Cliente* clt;
	fp = fopen("cliente.dat", "rb");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
		printf("Não é possível continuar o programa...\n");
		exit(1);
	}
	printf("\n\n");
	printf("========================== \n");
	printf("==  Lista de cadastros  ==\n");
	printf("========================== \n");
	clt = (Cliente*) malloc(sizeof(Cliente));
	while(fread(clt, sizeof(Cliente), 1, fp)) {
		if (clt->status == 1) {
			exibirCliente(clt);
		}
	}
	fclose(fp);
	free(clt);
	printf("\nPressione enter para voltar");

	getchar();
}


void regravarCliente(Cliente* clt) {
	int achou;
	FILE* fp;
	Cliente* cltLido;
	cltLido = (Cliente*) malloc(sizeof(Cliente));
	fp = fopen("cliente.dat", "r+b");
	if (fp == NULL) {
		printf("Não foi possível encontrar o arquivo solicitado...");
    printf("\n\nTecle ENTER para continuar!\n\n");
	  getchar();
    exit(1);
	}
	achou = False;
	while(fread(cltLido, sizeof(Cliente), 1, fp) && !achou) {
		if (strcmp(cltLido->cpf, clt->cpf) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Cliente), SEEK_CUR);
      fwrite(clt, sizeof(Cliente), 1, fp);
		}
	}
	fclose(fp);
	free(cltLido);
}