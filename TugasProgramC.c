#include <stdio.h>


int main() {

    double panjang_persegi;
    double lebar_persegi; 
    double luas;
    double keliling;

    printf("Diketahui Panjang Perseginya: ");
    scanf("%lf", &panjang_persegi);

    printf("Enter Lebar Persegi: ");
    scanf("%lf", &lebar_persegi);

    luas = panjang_persegi * lebar_persegi;
    keliling = 2 * (panjang_persegi + lebar_persegi);

    printf("Luas: %.0f cm dan Keliling: %.0f cm\n", luas, keliling);
    
    return 0;
}
