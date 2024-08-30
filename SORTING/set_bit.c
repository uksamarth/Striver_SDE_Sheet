#include<stdio.h>

long dec_to_bin(int n){
    int rem, place = 1;
    long bin = 0;
    while(n>0){
        rem = n%2;
        n = n/2;
        bin = bin+(rem*place);
        place = place*10;
    }
    return bin;
}

void setbit(int *n, int pos){
    *n = *n|(1<<pos);
}

int main(){
    int n = 0b10100100;
    setbit(&n,3);
    setbit(&n,4);
    printf("Decimal : %d\n",n);
    long res = dec_to_bin(n);
    printf("Binary : %ld",res);
    return 0;
}