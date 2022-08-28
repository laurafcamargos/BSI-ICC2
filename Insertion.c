#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ins(int a[], int n)
{
  for (int p = 1; p < n; p++)
  {
    int x = a[p];
    int i = p - 1;
    while (i >= 0 && x < a[i])
    {
      a[i + 1] = a[i];
      i--;
    }
    a[i + 1] = x;
  }
}
// adaptavel e estavel
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
  ins(vetor, n);
  printa_vetor(vetor, n);
}