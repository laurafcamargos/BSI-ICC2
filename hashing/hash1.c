#include <stdio.h>

    //algoritmo para fazer busca O(1):
    //utiliza um vetor estático
    //quase um bit array, mas usa menos memória

    //exemplo: inserir os números do vetor { 12, 15, 43, 13, 22, 51, 42, 52, 49, 72 }

    //vetor de deslocamento[10]
    //  0   1   2   3   4   5   6   7   8   9   (posições)
    //  0   0   2   0   4   7   0   8   0   0   (valores)

    //vetor de busca[14]
    //  00  01  02  03  04  05  06  07  08  09  10  11  12  13      (posições)
    //  00  00  12  13  22  15  42  43  51  52  72  00  00  49      (valores)


void hashing() {
    //M = capacidade

    //função hash: h(x, i) = (x+i) % m
    //hashing bom: primeiro número primo depois de n^2

    //colisão
}