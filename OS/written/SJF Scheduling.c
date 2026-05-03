#include <stdio.h>

int main() {
    int n, bt[10], wt[10], tat[10], temp;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
    }

    // sort burst time
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (bt[i] > bt[j]) {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }

    wt[0] = 0;

    for (int i = 1; i < n; i++) {
        wt[i] = wt[i-1] + bt[i-1];
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
        printf("P%d WT=%d TAT=%d\n", i+1, wt[i], tat[i]);
    }

    return 0;
}