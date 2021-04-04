#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro Cadastro;

struct cadastro{
    char nome[51];
    char endereço[51];
    int cpf;
    int celular;
    int dd;
    int mm;
    int aa;
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
void telaCadVenda(void);
void telaCadPag(void);
void telaPesquisarPag(void);
void telaRegProd(void);
void telaPesquisarProd(void);
void telaExcProduto(void);
int valData(int, int, int);
int bissexto(int);
int valHora(int, int);
void salvaDados(Cadastro*);
