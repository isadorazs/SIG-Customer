///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Cadastro de Clientes                ///
///                Developed by  Isadora Stéfany e Rafael Silva - Jan, 2021 ///
//////////////////////////////////////////////////////////////////////////////

#include "assinaturas.h"

///
/// Programa Principal
///
 
int main(void) {
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