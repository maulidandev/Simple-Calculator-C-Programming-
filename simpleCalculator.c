#include <stdio.h>

void menu();
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();

int main(int argc, char const *argv[])
{
    int pilihan;

    do{
        menu();
        printf("Pilihan : ");
        scanf(" %d", &pilihan);
        switch (pilihan)
        {
        case 1:
            penjumlahan();
            break;
        
        case 2:
            pengurangan();
            break;

        case 3:
            perkalian();
            break;

        case 4:
            pembagian();
            break;

        case 5:
            break;

        default:
            printf("Harap periksa kembali inputan Anda.\n\n");
            break;
        }
    } while (pilihan != 5);
    

    return 0;
}

void menu(){
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");
}

void penjumlahan(){
    float angkaSatu, angkaDua;

    printf("Masukkan Angka Pertama : ");
    scanf(" %f", &angkaSatu);

    printf("Masukkan Angka Kedua : ");
    scanf(" %f", &angkaDua);

    printf("Hasil : %g\n\n", (angkaSatu+angkaDua));
}

void pengurangan(){
    float angkaSatu, angkaDua;

    printf("Masukkan Angka Pertama : ");
    scanf(" %f", &angkaSatu);

    printf("Masukkan Angka Kedua : ");
    scanf(" %f", &angkaDua);

    printf("Hasil : %g\n\n", (angkaSatu-angkaDua));
}

void perkalian(){
    float angkaSatu, angkaDua;

    printf("Masukkan Angka Pertama : ");
    scanf(" %f", &angkaSatu);

    printf("Masukkan Angka Kedua : ");
    scanf(" %f", &angkaDua);

    printf("Hasil : %g\n\n", (angkaSatu*angkaDua));
}

void pembagian(){
    float angkaSatu, angkaDua;

    printf("Masukkan Angka Pertama : ");
    scanf(" %f", &angkaSatu);

    printf("Masukkan Angka Kedua : ");
    scanf(" %f", &angkaDua);

    printf("Hasil : %g\n\n", (angkaSatu/angkaDua));
}