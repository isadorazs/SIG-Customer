typedef struct pagamento Pagamento;


struct pagamento{
  float pagTotal;
  char cpf[12];
  char tipoPag[13];
  int meses;
  float quantPag;
  int status;  
};


char menuPagamento(void);
void regPag(void);
void pesquisarPag(void);
Pagamento* buscarPag(char*);
void salvaPag(Pagamento*);
void exibirPag(Pagamento*);
void listarPag(void);
void editPag(void);
char* telaRegPag(void);
char* telaPesquisarPag(void);
Pagamento* telaInfoPag(void);
char* telaEditPag(void);
void regravarPag(Pagamento*);