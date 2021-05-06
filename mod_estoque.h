typedef struct estoque Estoque;


struct estoque{
  char produto[21];
  char cod[5];
  int und;
  float preco;
  int status;  
};


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