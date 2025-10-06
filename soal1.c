#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int X[N];
    long long total = 0;
    int i;
    
    // Input data & hitung total
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        total += X[i];
    }
    
    // Cari nilai maksimum
    int maks = X[0];
    for (i = 1; i < N; i++) {
        if (X[i] > maks) {
            maks = X[i];
        }
    }
    
    // Hitung count & catat hari
    int count = 0;
    int days[N];
    for (i = 0; i < N; i++) {
        if (X[i] == maks) {
            days[count] = i + 1; // simpan hari (index mulai dari 1)
            count++;
        }
    }
    
    // Hitung persentase
    double percentage = (double)(maks * count) / total * 100.0;
    
    // Output
    printf("Max : %d\n", maks);
    printf("Count : %d\n", count);
    printf("days : ");
    for (i = 0; i < count; i++) {
        printf("%d", days[i]);
        if (i < count - 1) printf(" ");
    }
    printf("\n");
    printf("Percentage : %.3f%%\n", percentage);
    
    return 0;
}
