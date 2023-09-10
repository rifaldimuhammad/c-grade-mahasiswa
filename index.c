#include <stdio.h>

int main() {
    char nim[20];
    char nama[100];
    double tugas, uts, uas, nilai_akhir;
    char grade;

    // Meminta input NIM dan Nama
    printf("Masukkan NIM: ");
    scanf("%s", nim);
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", nama);

    // Meminta input nilai Tugas, UTS, dan UAS
    printf("Masukkan Nilai Tugas (0-100): ");
    scanf("%lf", &tugas);
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%lf", &uts);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%lf", &uas);

    // Validasi nilai antara 0-100
    if (tugas < 0 || tugas > 100 || uts < 0 || uts > 100 || uas < 0 || uas > 100) {
        printf("ERROR: Nilai harus berada dalam rentang 0 hingga 100.\n");
        return 1; // Keluar dengan kode error
    }

    // Menghitung nilai akhir dengan bobot
    nilai_akhir = (0.4 * tugas) + (0.3 * uts) + (0.3 * uas);

    // Menentukan grade
    if (nilai_akhir >= 90) {
        grade = 'A';
    } else if (nilai_akhir >= 85) {
        grade = 'A';
    } else if (nilai_akhir >= 80) {
        grade = 'B';
    } else if (nilai_akhir >= 75) {
        grade = 'B';
    } else if (nilai_akhir >= 70) {
        grade = 'B';
    } else if (nilai_akhir >= 65) {
        grade = 'C';
    } else if (nilai_akhir >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Menampilkan hasil
    printf("\nHasil:\n");
    printf("NIM: %s\n", nim);
    printf("Nama: %s\n", nama);
    printf("Nilai Akhir: %.2lf\n", nilai_akhir);
    printf("Grade: %c\n", grade);

    return 0;
}
