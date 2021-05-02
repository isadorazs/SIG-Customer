#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  int status;
};

struct estoque{
  char produto[21];
  int cod;
  int und;
  float preco;
  int status;  
};

struct pagamento{
  int precoPag;
  char tipoPag[11];
  char tempoPag[11];
  int cpf;
  int qntPag;
  int status;
};

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
void telaExibeCliente(Cliente*);
void salvaCliente(Cliente*);
void listarCliente(void);
Cliente* buscarCliente(char*);
void exibirCliente(Cliente*);
void regravarCliente(Cliente*);


char menuVendas(void);
void telaCadVenda(void);


char menuPagamento(void);
void telaCadPag(void);
void telaPesquisarPag(void);


char menuEstoque(void);
void telaRegProd(void);
void telaPesquisarProd(void);
void telaExcProduto(void);
void salvaEstoque(Estoque*);
void listarEstoque(void);


int valData(int, int, int);
int bissexto(int);
int ehDigito(char);
int validarCPF(char*);