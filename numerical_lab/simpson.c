#include <stdio.h>
#include <math.h>

#define f(x) (1.0 / ((x)*(x)*(x) + 1))

int main() {
    float a = 0, b = 1;
    int n = 10, i;
    float x[20], y[20];
    float h, s = 0.0;

    h = (b - a) / n;
    x[0] = a;
    for(i = 0; i <= n; i++) {
        x[i+1] = x[i] + h;
        y[i] = f(x[i]);
    }

    for(i = 0; i <= n-1; i = i + 2) {
        s = s + (h/3)*(y[i] + 4*y[i+1] + y[i+2]);
    }

    printf("Result = %f\n", s);

    return 0;
}