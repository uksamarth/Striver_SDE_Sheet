#include<stdio.h>
long fact(int num){
    if(num==0 || num==1) return 1;
    return num* fact(num-1);
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    long res = fact(num);
    printf("%ld",res);
    return 0;
}