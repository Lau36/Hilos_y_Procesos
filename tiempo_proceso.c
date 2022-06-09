#include <stdio.h>
#include <tiem.h>
#include <unistd.h>

int main(){
clock_t start;
pid_t pid = fork();
if (pid == 0) {
  clock_t end = clock();
  printf("%ld\n", end - start);
  }
}
