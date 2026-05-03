#include <stdio.h>
#include <unistd.h>

int main() {
    fork(); // creates a child process
    printf("Process created\n");
    return 0;
}
