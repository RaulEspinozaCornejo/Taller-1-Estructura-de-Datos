#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int cola[], int n){
    int tmp;
    for (int i = 0; i < n; i++) {   
        for (int j = 0; j < n - i - 1; j++) {
            if (cola[j] > cola[j + 1]) { 
                tmp = cola[j];
                cola[j] = cola[j + 1];
                cola[j + 1] = tmp;
            }
        }
    }
}

int main(void) {
  int n;
  int colaestatica1[n];
  int colaestatica2[n];

  n=10;

  for( int i = 0 ; i < n ; i++ ) {
      colaestatica1[i]=rand() % 50;
      colaestatica2[i]=rand() % 50;
   }

  printf("%s","Cola estática n°1= ");
  for(int j=0; j<n;j++){
    printf("%d,",colaestatica1[j]);
  }
  printf("%s \n","");
  printf("%s","Cola estática n°2= ");
  for(int a=0; a<n;a++){
      printf("%d,",colaestatica2[a]);
  }
  
  int ambasColas[2*n];
  for(int b=0;b<2*n;b++){
      if(b<n){
          ambasColas[b]=colaestatica1[b];
          ambasColas[n+b]=colaestatica2[b];
      }
  }
  
  printf("%s \n","");
  printf("%s","Datos de ambas colas= ");
  for(int c=0; c<2*n;c++){
      printf("%d,",ambasColas[c]);
  }
  
  bubble_sort(ambasColas,n);
  
  printf("%s \n","");
  printf("%s","Datos de ambas colas ordenados con método de la burbuja= ");
  for(int d=0; d<2*n;d++){
      printf("%d,",ambasColas[d]);
  }
}
