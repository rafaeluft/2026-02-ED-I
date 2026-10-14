


#ifndef PONTO_H
#define PONTO_H

//typedef struct _ponto Ponto;
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
 * Copia o valor da coordenada x (do Ponto) para 
 * a variável via ponteiro (passada por parâmetro)
 * @param Ponto* instância do Ponto;
 * @param float* endereço para a variável a ser armazenada
 */
void Ponto_get_x(Ponto*, float*);

/**
 * Altera o valor da coordenada x do ponto;
 * @param Ponto* instância do Ponto;
 * @param float variável para ser atribuída à coordenada x
 */
void Ponto_set_x(Ponto*, float);
/**
 * Calcula a dist euclidiana entre dois pontos
 * @param Ponto* primeiro ponto
 * @param Ponto* segundo ponto
 * @return float com o cálculo da distância
 */
//TODO: Replicar as duas funções acima para a coordenada y
float Ponto_dist_eucl(Ponto*, Ponto*);
#endif