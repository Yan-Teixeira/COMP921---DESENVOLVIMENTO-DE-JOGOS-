#include <stdio.h>
#include "interface.h"
#include "personagem.h"


int main()
{
    Personagem meu_personagem = {"", "", 0};
    int opcao;

    do{
        interface_menu();
        opcao = ler_opcao();

        switch (opcao)
        {
        case 1:
            printf("voce escolheu a opcao 1\n");
            break;
        case 2:
            criar_personagem(&meu_personagem);
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            break;
        }
        
    } while (opcao != 3);
    
    return 0;
}