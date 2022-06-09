//El tiempo que se demora un proceso
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
        clock_t start;
        pid_t pid = fork();
        if (pid == 0) {
         clock_t end = clock();
        printf("%ld\n", end - start);
        }
}

