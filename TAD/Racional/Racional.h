#ifndef RACIONAL_H
#define RACIONAL_H
#include <stdbool.h>
/*
a) Cria racional (recebe dois inteiros: numerador e denominador);
b) Soma dois números racionais (um novo elemento deve ser criado contendo a soma dos
dois);
c) Multiplica dois números racionais (mesma interface da letra b)).
d) Testa se são iguais.
 */
typedef struct _racional Racional;
/** 
 * a) Cria racional (recebe dois inteiros: numerador e denominador); 
 * @param int numerador
 * @param int denominador
 * */
Racional* Racional_create(int, int);

/**
 * b) Soma dois números racionais (um novo elemento deve ser criado contendo a soma dos
dois);
* @param Racional* a primeira fracao
* @param Racional* a segunda fração para soma
*/
Racional* Racional_soma(Racional*, Racional*);
/**
 * c) Multiplica dois números racionais (um novo elemento deve ser criado contendo a soma dos
dois);
* @param Racional* a primeira fracao
* @param Racional* a segunda fração para multiplicacao
*/
Racional* Racional_mult(Racional*, Racional*);
/**
 * d) Testa se são iguais
* @param Racional* a primeira fracao
* @param Racional* a segunda fração para multiplicacao
*/
bool Racional_sao_iguais(Racional*, Racional*);

//Fora da interface
/**
 * Imprime uma fracao no formato num/den
 */
void Racional_print(Racional*);
#endif