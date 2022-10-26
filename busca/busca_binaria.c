#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int a[], int n, int x);


int busca_binaria(int a[], int n, int x)
{ // vetor ordenado
    int c = 0;
    int f = n - 1;
    int m;
    while (c <= f)
    {
        m = (c + f) / 2;
        if (x == a[m])
            return m;
        else if (x < a[m])
        {
            f = m - 1;
        }
        else
        { // x > a[m]
            c = m + 1;
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ",&vetor[i]);
    }
    int x = 2;
    int recebe = busca_binaria(vetor,n,x);
    printf("%d",recebe);
    return 0; 
}