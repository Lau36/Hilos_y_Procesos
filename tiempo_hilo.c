//Tiempo de creacion de un hilo
#include <stdio.h>
#include <pthread.h>
#include <time.h>
clock_t start;

void *worker(void *data) {
  clock_t end = clock();
  printf("%ld\n", end - start);;
}

int main(){
         printf("Tiempo:\n");
   start=clock();
   pthread_t thread; //identificador del hilo
   pthread_create(&thread, NULL, &worker, NULL); //crea el hilo
   pthread_join(thread, NULL);

}
