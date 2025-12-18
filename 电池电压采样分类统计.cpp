#include <stdio.h>

int main() {
    int N, i, v;
    int high = 0, mid = 0, low = 0, fail = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &v);

        if (v == 0) {
            fail++;
        } else if (v >= 4000) {
            high++;
        } else if (v >= 3400) {
            mid++;
        } else {
            low++;
        }
    }

    printf("HIGH=%d MID=%d LOW=%d FAIL=%d\n", high, mid, low, fail);
    return 0;
}