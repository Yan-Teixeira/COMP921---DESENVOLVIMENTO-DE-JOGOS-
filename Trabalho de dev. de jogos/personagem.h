#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#define MAX_NOME 50
#define MAX_CLASSE 30


typedef struct{
    char nome[MAX_NOME];
    char classe[MAX_CLASSE];
    int criado;

}Personagem;

void criar_personagem(Personagem *p);

#endif
