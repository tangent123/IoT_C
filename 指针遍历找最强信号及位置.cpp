#include <stdio.h>

int main() {
    int N, i;
    int a[1000];

    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &a[i]);

    {
        int *p = a;
        int maxv = *p;
        int pos = 1;   /* 1-based */
        int idx = 1;

        for (i = 0; i < N; i++, p++, idx++) {
            if (*p > maxv) {   /* 用 > 保证“首次出现” */
                maxv = *p;
                pos = idx;
            }
        }

        printf("MAX=%d POS=%d\n", maxv, pos);
    }

    return 0;
}