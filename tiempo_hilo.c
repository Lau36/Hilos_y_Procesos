#include <stdio.h>                                                             
#include <pthread.h>                                                           
#include <time.h>  
clock_t start;

void *worker(void *data) {
  clock_t end = clock();
  printf("%ld\n", end - start);
}

int main(){
   start=clock();
   pthread_t hilo;
   pthread_create(&hilo,NULL, &worker,NULL);
   pthread_join(hilo,NULL);
}

