#include <stdio.h>
#define f(x) ((x)*(x) + 1)

int main() {
    int a = 0, b = 1, i;
    int n = 10;
    float x[11], y[11];
    float h, S = 0;

    x[0] = a;
    h = (b - a) / 10.0;

    for(i = 0; i <=n; i++) {
        y[i] = f(x[i]);
        x[i + 1] = x[i] + h;
    }

    for(i = 0;i<=n-1; i++) {
        S = S + (h / 2) * (y[i + 1] + y[i]);
    }

    printf("Result = %f\n", S);

    return 0;
}
