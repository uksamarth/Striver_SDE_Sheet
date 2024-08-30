#include<stdio.h>

void setbit(int n, int pos){
    n = n| (1<<pos);
    printf("After setting the bit\n");
    printf("%d",n);
}
void clearbit(int n, int pos){
    n = n& ~(1<<pos);
    printf("After clearing the bit\n");
    printf("%d",n);
}
void toggle_bit(int n, int pos){
    n = n^(1<<pos);
    printf("After toggling the bit\n");
    printf("%d",n);
}

int main(){
    int n = 10;
    printf("%d\n",n);
    int pos;
    scanf("%d",&pos);
    toggle_bit(n,pos);
    return 0;
}