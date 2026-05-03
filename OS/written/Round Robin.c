#include <stdio.h>

int main() {
    int n, bt[10], rem[10], tq, time = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        rem[i] = bt[i];
    }

    printf("Enter time quantum: ");
    scanf("%d", &tq);

    while (1) {
        int done = 1;

        for (int i = 0; i < n; i++) {
            if (rem[i] > 0) {
                done = 0;

                if (rem[i] > tq) {
                    time += tq;
                    rem[i] -= tq;
                } else {
                    time += rem[i];
                    printf("P%d finished at %d\n", i+1, time);
                    rem[i] = 0;
                }
            }
        }

        if (done) break;
    }

    return 0;
}