#include "assinaturas.h"

 
int main(void) {
  system("clear || cls");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
  printf("///                                                                         ///\n");
  printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
  printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
  printf("///               Departamento de Computação e Tecnologia                   ///\n");
  printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
  printf("///               Projeto Sistema de Cadastro de Clientes                   ///\n");
  printf("///        Developed by  Isadora Stéfany e Rafael Silva - Jan, 2021         ///\n");
  printf("///                                                                         ///\n");
  printf("///                  >>> Tecle <ENTER> para continuar...                    ///\n");
  printf("///////////////////////////////////////////////////////////////////////////////\n");
	getchar();

	char opcao;
  while(opcao != '0'){
    opcao = menuPrincipal();
    switch (opcao){
      case '1':
        menuCliente();
        break;
      case '2':
        menuVendas();
        break;
      case '3':
        menuPagamento();
        break;
      case '4':
        menuEstoque();
        break;
    }

  } 
  return 0;
}


char menuPrincipal(void) {
	char op;
  system("clear || cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Módulo Cliente                                           ///\n");
  printf("///           2. Módulo Vendas                                            ///\n");
  printf("///           3. Módulo Pagamentos                                        ///\n");
	printf("///           4. Módulo Estoque                                           ///\n");
	printf("///           0. Encerrar o programa                                      ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  scanf("%c", &op);
	getchar();
  printf("\n");
  return op;
}


// função feita por @flaviusgorgonio
int valData(int dd, int mm, int aa) {
    int maiorDia;
    if (aa < 0 || mm < 1 || mm > 12 || dd < 1)
         return 0;
    if (mm == 2) {
         if (bissexto(aa)){
             maiorDia = 29;
        }else{
             maiorDia = 28;
        }
     } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
         maiorDia = 30;
     } else {
         maiorDia = 31;
        if (dd > maiorDia){
            return 0;
        }
    }
     return 1;
}

// função feita por @flaviusgorgonio
int bissexto(int aa) {
    if ((aa % 4 == 0) && (aa % 100 != 0)) {
         return 1;
     } else if (aa % 400 == 0) {
         return 1;
     } else {
         return 0;
     }
}


// função feita por @flaviusgorgonio
int ehDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}


// função feita por @flaviusgorgonio
int validarCPF(char* cpf) {
  int tam;
  tam = strlen(cpf);
  if (tam < 10 || tam > 11) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(cpf[i])) {
      return 0;
    }
  }
  return 1;
}

int validarCod(char* cod) {
  int tam;
  tam = strlen(cod);
  if (tam < 4 || tam > 5) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(cod[i])) {
      return 0;
    }
  }
  return 1;
}

int validarTelefone(char* celular) {
  int tam;
  tam = strlen(celular);
  if (tam < 8 || tam > 9) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!ehDigito(celular[i])) {
      return 0;
    }
  }
  return 1;
}