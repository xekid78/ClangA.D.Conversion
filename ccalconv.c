#include <stdio.h>

int main(void) {
    int seireki, syowa;
    for (seireki = 1926; seireki <= 1935; seireki++) {
        printf("西暦%d年は", seireki);
        syowa = seireki - 1925;
        printf("昭和%d年です\n", syowa);
    }
    return 0;
}
