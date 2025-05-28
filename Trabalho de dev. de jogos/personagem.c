#include <stdio.h>
#include <string.h>
#include "personagem.h"



const char *classes_disponiveis[] = {
    "Guerreiro",
    "Mago",
    "Arqueiro"

};
const int TOTAL_CLASSES = 3;

void criar_personagem(Personagem *p){
    int escolha;

    printf("=== Criar personagem ===\n");
    printf("Digite o nome do personagem: ");
    scanf("%[^\n]", p->nome);

    //Mostrar classes 

    printf("Escolha uma classe:\n");
    for( int i = 0; i <TOTAL_CLASSES; i++){
        printf("%d. %s\n, i + 1, classes_disponiveis[i]");
    }
    do{
        printf("Digite o número da classe escolhida:");
        scanf("%d", &escolha );

        if(escolha < 1 || escolha > TOTAL_CLASSES){
            printf("opcao invalida. Tente novamente");
        }
    
    } while (escolha <1 || escolha > TOTAL_CLASSES);

    strcpy(p->classe, classes_disponiveis[escolha - 1]);

    p->criado = 1;
    printf("personagem criado com sucesso \n");


}
