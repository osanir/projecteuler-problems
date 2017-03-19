#include <stdio.h>

int carpan_bul(int);
int ters_bul(int,int);

int main(){
    int sayi=1;
    int ters;
    int carpan;
    int hold=1;

    int bir,iki;
    for(bir=100; bir<1000; bir++){
        for(iki=100; iki<1000; iki++){
            sayi = bir * iki;
            carpan = carpan_bul(sayi);
            ters = ters_bul(sayi, carpan);

            if(sayi == ters && sayi>hold){
                hold = sayi;
                printf("Bir: %d İki: %d \nSayı: %d\n\n",bir, iki, hold);
            }
        }
    }
}

int carpan_bul(int sayi){
  int carpan = 1;
  while(sayi > 9){
    sayi /= 10;
    carpan *= 10;
  }
  return carpan;
}

int ters_bul(int sayi, int carpan){
    int mod;
    int ters = 0;
    while(sayi > 0){
      mod = sayi % 10;
      ters += mod*carpan;
      sayi /= 10;
      carpan /=10;
    }
    return ters;
}
