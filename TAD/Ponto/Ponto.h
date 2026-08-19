


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

/**
 * Libera a memória alocada a um ponto
 * @param Ponto* instância válida para um ponto
 */
void Ponto_delete(Ponto*);
/**
 * Calcula a dist euclidiana entre dois pontos
 * @param Ponto* primeiro ponto
 * @param Ponto* segundo ponto
 * @return float com o cálculo da distância
 */
float Ponto_dist_eucl(Ponto*, Ponto*);
#endif