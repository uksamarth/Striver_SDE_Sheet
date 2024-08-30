#include<stdio.h>

void leap_y(int num){
    if(num%400==0 || (num%4)==0 && (num%100)!=0){
        printf("leap year");
    }
    else{
        printf("Not a leap year");
    }
}

int main(){
    int num;
    scanf("%d",&num);
    leap_y(num);
    return 0;
}