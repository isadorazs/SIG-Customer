///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Cadastro de Clientes                     ///
///                Developed by  Isadora Stéfany e Rafael Silva - Jan, 2021                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void MenuInicial(void);
int main(void)
{
    int escolha;
    inicio:
    
    printf("Digite o que você deseja fazer:\n");
    printf("1 - Cadastrar Cliente \n2 - Editar Cliente \n3 - Pesquisar Cliente \n4 - Apagar Cliente\n5 Sair \n");
    scanf("%d", &escolha);
    switch (escolha) {
void MenuCad(void);
    case 1:
        printf("Digite o nome do seu cliente\n");
        break;
    case 2:
        
        printf("Qual Cliente você deseja editar?\n");
        break;
    case 3:
        
        printf("Digite o nome do cliente que você deseja encontrar\n");
        break;
    case 4:
        
        printf("Qual cliente você deseja apagar?\n");
        break;
    case 5:
        
        printf("Sessão finalizada\n");
        break;
    default:
        printf("Você deve escolher uma opcão válida\n");
        printf("Voltando ao menu principal\n");
        system("pause");
        goto inicio;
    }
}