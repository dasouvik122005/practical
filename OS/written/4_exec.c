#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before exec()\n");
    
    // Replace current process with 'ls' command
    execlp("ls", "ls", "-l", NULL);
    
    // This line will only be executed if exec fails
    printf("Exec failed!\n");
    return 0;
}
