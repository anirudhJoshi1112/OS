#include <stdio.h>
#include <stdlib.h> // Include the stdlib.h header for the exit function
#include <unistd.h>

int main() {
    int pid, pid1, pid2;
    pid = fork();

    if (pid == -1) {
        printf("ERROR IN PROCESS CREATION\n");
        exit(1);
    }

    if (pid != 0) {
        pid1 = getpid();
        printf("The parent process ID is %d\n", pid1);
    } else {
        pid2 = getpid();
        printf("The child process ID is %d\n", pid2);
    }

    return 0;
}