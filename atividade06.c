#include <stdio.h>
#include <stdlib.h>

int Shell(int *a, int n);
int Quick(int *v, int f, int l);

int Shell(int *v, int n) {

    int gap = 1;
    int count = 0;

    while (gap <= n)
    {

        gap *= 2;
    }

    gap = (gap / 2) - 1;

    while (gap > 0)
    {

        for (int i = gap; i < n; i += gap)
        {

            int x = v[i];
            count++;
            int j = i - gap;

            while (j >= 0 && v[j] > x)
            {
                count++;
                v[j + gap] = v[j];
                count++;
                j -= gap;
            }

            v[j + gap] = x;
            count++;
        }

        gap /= 2;
    }
    return count;
}
int Quick(int *v, int f, int l) {
    int count = 0;

    if (f >= l)
    {

        return count;
    }

    int m = (l + f) / 2;

    int pivot = v[m];
    count++;

    int i = f;

    int j = l;

    while (1)
    {

        while (v[i] < pivot)
        {
            count++;
            i++;
        }

        while (v[j] > pivot)
        {
            count++;
            j--;
        }

        if (i >= j)
        {

            break;
        }

        int aux = v[i];
        count++;

        v[i] = v[j];
        count++;
        v[j] = aux;
        count++;
        i++;

        j--;
    }
    printf("%d",count);
    Quick(v, f, j);
    return count;
    Quick(v, j + 1, l);
    return count;
}

int main()
{
  int N;
  int *vetor;
  int *vetor1;
  int c1,c2;
  scanf("%d", &N);

  vetor = (int *)malloc(N * sizeof(int));
  for (int i = 0; i < N; i++) {
    scanf("%d", &vetor[i]);
  }
  vetor1 = (int *)malloc(N * sizeof(int));
  for (int i = 0; i < N; i++) {
      vetor1[i]= vetor[i];
  }
  for (int i = 0; i < N; i++) {
    c1 = Shell(vetor, N); 
    c2 = Quick(vetor1,0, N- 1);
    if (c1 == c2) {
        printf("- ");
    }
    else if (c1 > c2)
    {
        printf("Q ");
    }else if (c1 < c2) {
        printf("S ");
    }
  }
  printf("\n");
    for (int i = 0; i < N; i++) {
      printf("%d ",vetor[i]);
  }
  printf("\n");
   for (int i = 0; i < N; i++) {
      printf("%d ",vetor1[i]);
  }
 free(vetor1);
 free(vetor);
  return 0;
}