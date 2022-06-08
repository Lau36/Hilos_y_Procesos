time_t start=time();
pid_t pid = fork();
if (pid == 0) {
  time_t end = time();
  printf("%d\n", end - start);
}
