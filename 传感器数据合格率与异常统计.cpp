#include <stdio.h>

int main() {
    int N, Tmin, Tmax;
    int i, x;
    int ok = 0, abn = 0;
    int maxD = 0;

    scanf("%d %d %d", &N, &Tmin, &Tmax);

    for (i = 0; i < N; i++) {
        scanf("%d", &x);

        if (x >= Tmin && x <= Tmax) {
            ok++;
        } else {
            int d1 = x - Tmin; if (d1 < 0) d1 = -d1;
            int d2 = x - Tmax; if (d2 < 0) d2 = -d2;
            int d = (d1 > d2) ? d1 : d2;

            abn++;
            if (d > maxD) maxD = d;
        }
    }

    printf("OK=%d\n", ok);
    printf("RATE=%.2f%%\n", ok * 100.0 / N);
    printf("ABN=%d MAXD=%d\n", abn, maxD);

    return 0;
}