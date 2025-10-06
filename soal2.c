#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // daun
    for (int i = 1; i < N; i++) {
        // spasi dikurangi 1 supaya lebih kiri
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // batang
    for (int j = 0; j < N - 2; j++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}
