#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubble_sort(int *vetor, int n);
void selection_sort(int *vetor, int max);
int *ler_vetor(int *vetor, int n);
void *printa_vetor(int *vetor, int n);
int *ler_vetor(int *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

void bubble_sort(int *vetor, int n)
{
    int i, j, aux;

    for (i = n - 1; i > 0; i--)
    {

        for (j = 0; j < i; j++)
        {

            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
void selection_sort(int *vetor, int n)
{
    int i, j, menor, aux;

    for (i = 0; i < (n - 1); i++)
    {
        menor = i;
        for (j = i + 1; j < n; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                printf("C %d %d\n", i,j);
                menor = j;
            }
        }
        if (i != menor)
        {
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}
void *printa_vetor(int *vetor, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int tam, ret;
    char met[10];
    char sel[10] = "selecao";
    char bol[5] = "bolha";
    scanf("%s", met);
    scanf("%d", &tam);
    int vetor[tam];
    ler_vetor(vetor, tam);
    ret = strcmp(met, sel);
    if (ret == 0)
    {
        selection_sort(vetor, tam);
        printa_vetor(vetor, tam);
    }
    else
    {
        bubble_sort(vetor, tam);
        printa_vetor(vetor, tam);
    }

    return 0;
}
