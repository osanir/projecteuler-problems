#include <stdio.h>

int main(){
    int first=1, now=2, temp;
    int toplam = 0;
    while(now < 4000000){
        if( now % 2 == 0)
            toplam += now;
        temp = first;
        first = now;
        now = first + temp;
    }
    printf("First: %d \nToplam: %d\n  \n", first, toplam);

}
