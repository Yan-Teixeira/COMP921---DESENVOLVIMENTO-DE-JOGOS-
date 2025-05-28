#include <stdio.h>
#include "interface.h"

void interface_menu(){
    printf("======== Menu =========\n");
    printf("1. Iniciar historia\n");
    printf("2. Criar personagem\n");
    printf("3. Sair do programa\n");
    printf("========================\n");
}
int ler_opcao(){
    int opcao;
    printf("escolha uma opcao:\n");
    scanf("%d", &opcao);
    return opcao;
}