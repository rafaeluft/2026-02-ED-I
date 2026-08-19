


#ifndef PONTO_H
#define PONTO_H

typedef struct _ponto Ponto;
/**
 * Cria instâncias de ponto.
 * @param float x
 * @param float y
 * @return Ponto* instância para um ponto preenchido ou NULL
 */
Ponto* Ponto_create(float, float);
/**
 * Imprime um ponto formatado com até duas casas.
 * @param Ponto* instância válida para um ponto
 */
void Ponto_print(Ponto*);

#endif