#include <stdio.h>

int main() {

    float s, ns, inc;
    scanf("%f", &s);

    if (s > 0 && s <= 400) {
        inc = s * 0.15;
        ns = s + inc;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", ns, inc);

    } else if (s <= 800) {
        inc = s * 0.12;
        ns = s + inc;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", ns, inc);

    } else if (s <= 1200) {
        inc = s * 0.10;
        ns = s + inc;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", ns, inc);

    } else if (s <= 2000) {
        inc = s * 0.07;
        ns = s + inc;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", ns, inc);

    } else if (s > 2000) {
        inc = s * 0.04;
        ns = s + inc;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", ns, inc);
    }

    return 0;
}