#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge(int a[], int n);
void mergerecursivo(int a[], int inicio, int fim, int b[]);

void merge(int a[], int n) // qntd de elementos do vetor
{
    int *b = (int *)malloc(n * sizeof(int));
    mergerecursivo(a, 0, n - 1, b); // indice do ultimo elemento, b eh o vetor auxiliar
    free(b);
}
void mergerecursivo(int *a, int inicio, int fim, int b[])
{
    if (inicio >= fim) // caso base: aonde deixa de ser recursiva
    {
        return;
    }
    int m = (inicio + fim) / 2;
    mergerecursivo(a, inicio, m, b);
    mergerecursivo(a, m + 1, fim, b); // tenho dois vetores ordenados
    int i1 = inicio;
    int i2 = m + 1;
    int j = 0; // aonde em b eu vou colocar o menor elemento dos outros dois vetores
    while (i1 <= inicio && i2 <= fim)
    {
        if (a[i1] <= a[i2])
        {
            b[j] = a[i1];
            i1++;
        }
        else
        {
            b[j = a[i2]];
            i2++;
        }
        j++;
    }
    while (i1 <= m)
    {
        b[j] = a[i1];
        i1++;
        j++;
    }
    while (i2 <= fim)
    {
        b[j] = a[i1];
        i1++;
        j++;
    }
    j = 0;
    for (int i = inicio; i <= fim; i++)
    {
        a[i] = b[j];
        j++;
    }
}
void printa_vetor(int *vetor, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int vetor[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        vetor[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    merge(vetor, n);
    printa_vetor(vetor, n);
}
