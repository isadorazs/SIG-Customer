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
    menuPrincipal();
    menuCliente();
    menuVendas();
    menuPagamento();
    menuEstoque();
    telaCadastrarCliente();
    telaCadVenda();
    telaCadPag();
    telaRegProd();
	telaBuscarCliente();
	telaExcCliente();
	telaEditCliente();
  telaPesquisarProd();
  telaAtualProd();
    return 0;
}


