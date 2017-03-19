#include <stdio.h>

int main(){
    int i=1;
    int toplam = 0;
    for(i=1; i<1000; i++){
        if( (i % 3 == 0) || (i % 5 == 0)){
            toplam += i;
            printf("i sayısı: %d Toplam: %d\n", i, toplam);
        }
    }


}
