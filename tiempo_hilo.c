#include <stdio.h>                                                             
#include <pthread.h>                                                           
#include <time.h>  
time_t start;

void *worker(void *data) {
  time_t end = time();
  printf("%d\n", end - start);
}

int main(){
   start=time();
   pthread_t thread_id;
   pthread_create(&thread_id,NULL, &worker,NULL);
   pthread_join(thread_id,NULL);
}
