#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define True 1
#define False 0

typedef struct cliente Cliente;
typedef struct estoque Estoque;
typedef struct pagamento Pagamento;
typedef struct venda Venda;

struct cliente{
  char nome[51];
  char endereco[51];
  char cpf[12];
  int celular;
  int dd;
  int mm;
  int aa;
  float precoPag;
  char tipoPag[11];
  int prazo;
  float qntPag;
  int status;
};

struct estoque{
  char produto[21];
  char cod[5];
  int und;
  float preco;
  int status;  
};

/*struct pagamento{
  
  int status;
};*/

struct venda{
  int cod;
  char cpf[12];
  int preco;
  int dd;
  int mm;
  int aa;
  int status;
};

char menuPrincipal(void);


void menuCliente(void);
void cadastrarCliente(void);
void pesquisarCliente(void);
void editCliente(void);
void excCliente(void);
Cliente* telaCadastrarCliente(void);
char* telaPesquisarCliente(void);
char* telaEditCliente(void);
char* telaExcCliente(void);
void salvaCliente(Cliente*);
void listarCliente(void);
Cliente* buscarCliente(char*);
void exibirCliente(Cliente*);
void regravarCliente(Cliente*);


char menuVendas(void);
void telaCadVenda(void);


char menuPagamento(void);
void regPag(void);
//void pesquisarPag(void);
char* telaRegPag(void);
Cliente* telaInfoPag(void);
//char* telaPesquisarPag(void);


char menuEstoque(void);
void regProd(void);
void pesquisarProd(void);
void excProd(void);
char* telaRegProd(void);
char* telaPesquisarProd(void);
char* telaExcProd(void);
Estoque* buscarProd(char*);
void exibirProd(Estoque*);
void salvaEstoque(Estoque*);
void listarEstoque(void);
void regravarProd(Estoque*);


int valData(int, int, int);
int bissexto(int);
int ehDigito(char);
int validarCPF(char*);


/*void listar(void){
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
}*/