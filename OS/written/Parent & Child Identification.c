#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        printf("This is Child Process\n");
    } else {
        printf("This is Parent Process\n");
    }

    return 0;
}