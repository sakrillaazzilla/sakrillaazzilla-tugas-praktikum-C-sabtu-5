#include <stdio.h>

int main() {
    char jenis;   // Variabel untuk menyimpan jenis A, B, atau C
    float harga, harga_after_diskon;  // Variabel untuk menyimpan harga sebelum dan setelah diskon

    // Input data kode (tidak digunakan dalam perhitungan)
    int kode;
    printf("Masukkan kode: ");
    scanf("%d", &kode);

    // Input jenis dan harga
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis);  // Spasi sebelum %c untuk menghindari masalah dengan input sebelumnya
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    // Proses diskon berdasarkan jenis
    switch (jenis) {
        case 'A':
        case 'a':
            harga_after_diskon = harga * 0.9;  // Diskon 10% untuk jenis A
            break;
        case 'B':
        case 'b':
            harga_after_diskon = harga * 0.85; // Diskon 15% untuk jenis B
            break;
        case 'C':
        case 'c':
            harga_after_diskon = harga * 0.8;  // Diskon 20% untuk jenis C
            break;
        default:
            printf("Jenis tidak valid!\n");
            return 1;  // Keluar jika jenis tidak valid
    }

    // Menampilkan hasil
    printf("Harga setelah diskon: %.2f\n", harga_after_diskon);

    return 0;
}