#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before fork()\n");
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed!\n");
    } else if (pid == 0) {
        printf("This is the child process.\n");
    } else {
        printf("This is the parent process.\n");
    }
    
    return 0;
}
