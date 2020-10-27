#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int x = 100;
    int c_pid = fork();

    if (c_pid < 0) {
        fprintf(stderr, "fork failed\n");
        exit(EXIT_FAILURE);
    }
    if (c_pid == 0) {
        // child process
        x = 101;
        printf("CHILD: x = %d\n", x);
    } else {
        // parent process
        x = 102;
        printf("PARENT: x = %d\n", x);
    }
    return 0;
}