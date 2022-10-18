#include <stdio.h>

int main(){

  int a[6]= {0,1,2,3,4,5};
  int i, j, aux;
  for (i = 1; i < 6; i++)
  {
    aux = a[i];
    for(j = i- 1; j %2!= 0; j++ )
    {
      a[j + 1] = a[j];
    }
    a[j + 1] = aux;
    for (int i = 0; i < 6; i++)
  {
    printf("%d ",a[i]);
  }
  }
  
  return 0;
  
}
