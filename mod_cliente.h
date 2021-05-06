typedef struct cliente Cliente;


struct cliente{
  char nome[51];
  char endereco[51];
  char cpf[12];
  char celular;
  int dd;
  int mm;
  int aa;
  int status;
};


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