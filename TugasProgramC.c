#include <stdio.h>

int main() 
{
    float panjang;
    float lebar;
    float luas;
    float keliling;

    printf("Masukkan panjang persegi panjang: ");
    scanf("%f", &panjang);

    printf("Masukkan lebar persegi panjang: ");
    scanf("%f", &lebar);

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf("Luas persegi panjang: %.2f\n", luas);
    printf("Keliling persegi panjang: %.2f\n", keliling);

    return 0;
}