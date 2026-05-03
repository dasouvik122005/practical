#include <stdio.h>

int main() {
    int n, bt[10], type[10];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Burst time & Type (1=System,2=User): ");
        scanf("%d %d", &bt[i], &type[i]);
    }

    printf("System Queue:\n");
    for (int i = 0; i < n; i++) {
        if (type[i] == 1)
            printf("P%d\n", i+1);
    }

    printf("User Queue:\n");
    for (int i = 0; i < n; i++) {
        if (type[i] == 2)
            printf("P%d\n", i+1);
    }

    return 0;
}