#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int c_pid = fork();

    if (c_pid < 0) {
        fprintf(stderr, "fork failed\n");
        exit(EXIT_FAILURE);
    }
    if (c_pid == 0) {
        // child process
    } else {
        // parent process
    }
    return 0;
}