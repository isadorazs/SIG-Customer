#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro Cadastro;

struct cadastro{
  char nome[51];
  char endereco[51];
  int cpf;
  int celular;
  int dd;
  int mm;
  int aa;
  char status;
};

char menuPrincipal(void);
void menuCliente(void);
char menuVendas(void);
char menuPagamento(void);
char menuEstoque(void);
void telaCadastrarCliente(void);
void telaBuscarCliente(void);
void telaEditCliente(void);
void telaExcCliente(void);
void telaExibeCliente(Cadastro*);
void telaCadVenda(void);
void telaCadPag(void);
void telaPesquisarPag(void);
void telaRegProd(void);
void telaPesquisarProd(void);
void telaExcProduto(void);
int valData(int, int, int);
int bissexto(int);
void salvaDados(Cadastro*);
void listar(void);