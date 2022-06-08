time_t start;

void *worker(void *data) {
  time_t end = time();
  printf("%d\n", end - start);
}

int main() {
   start=time();
   pthread_create(thread_id,NULL, worker,NULL);
}
