#include <stdio.h>

int hitungLamaBekerja( int jamMasuk,  int jamKeluar) {
    int lamaBekerja;

    
    if (jamKeluar < jamMasuk) {
        
        lamaBekerja = (12 - jamMasuk) + jamKeluar;
    } else {
        
        lamaBekerja = jamKeluar - jamMasuk;
    }

    return lamaBekerja;
}

int main() {
    int jamMasuk, jamKeluar;

    
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);

    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jamKeluar);

    
    if (jamMasuk < 1 || jamMasuk > 12 || jamKeluar < 1 || jamKeluar > 12) {
        printf("Input jam tidak valid. Jam harus antara 1 hingga 12.\n");
        return 1;
    }

    
    int lamaBekerja = hitungLamaBekerja(jamMasuk, jamKeluar);

    
    printf("Lama bekerja: %d jam\n", lamaBekerja);

    return 0;
}

