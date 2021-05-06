#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mod_cliente.h"
#include "mod_pag.h"
#include "mod_estoque.h"
#include "validacao.h"


char menuPrincipal(void);

 
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
        menuPagamento();
        break;
      case '3':
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
  printf("///           2. Módulo Pagamentos                                        ///\n");
	printf("///           3. Módulo Estoque                                           ///\n");
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


