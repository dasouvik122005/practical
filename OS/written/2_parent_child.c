#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed!\n");
    } else if (pid == 0) {
        printf("Child Process: ID = %d, Parent ID = %d\n", getpid(), getppid());
    } else {
        printf("Parent Process: ID = %d, Child ID = %d\n", getpid(), pid);
    }
    
    return 0;
}
