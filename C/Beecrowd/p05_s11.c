#include <stdio.h>

int main() {
    char d[3], m[3], y[3];
    scanf("%2s/%2s/%2s", d, m, y); 

    printf("%s/%s/%s\n", m, d, y); 
    printf("%s/%s/%s\n", y, m, d); 
    printf("%s-%s-%s\n", d, m, y); 

    return 0;
}