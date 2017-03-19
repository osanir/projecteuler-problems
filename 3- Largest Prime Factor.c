#include <stdio.h>
#include <math.h>

int main() {
    double asal=2;
    double sayi=600851475143;
    while(sayi != 1){
    printf("Asal: %lf\tSayı: %lf\n", asal, sayi);
        if(fmod(sayi,asal) == 0)
            sayi /= asal;
        else
          asal++;
    }
}
