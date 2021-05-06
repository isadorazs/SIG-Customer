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
  float precoVenda;
  int undVenda;
  int status;  
};

struct pagamento{
  float pagTotal;
  char cpf[12];
  char tipoPag[13];
  int meses;
  float quantPag;
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
void cadVenda(void);
char* telaCadVenda(void);
Estoque* telaInfoVenda(void);


char menuPagamento(void);
void regPag(void);
void salvaPag(Pagamento*);
void exibirPag(Pagamento*);
void listarPag(void);
void editPag(void);
char* telaRegPag(void);
Pagamento* telaInfoPag(void);
char* telaEditPag(void);


char menuEstoque(void);
void regProd(void);
void pesquisarProd(void);
void editProd(void);
void excProd(void);
Estoque* telaRegProd(void);
char* telaPesquisarProd(void);
char* telaEditProd(void);
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
int validarCod(char*);