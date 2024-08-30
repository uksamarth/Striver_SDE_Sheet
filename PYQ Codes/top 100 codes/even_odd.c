#include<stdio.h>
//method 1
// void function(int num){
//     if(num%2==0){
//         printf("Even number");
//     }
//     else{
//         printf("Odd number");
//     }
// }

//method 2

// void function(int num){
//     num%2==0 ? printf("even"):printf("odd");
// }

//method 3

void function(int num){
    if(num&1==1) {
        printf("odd");
    }
    else{
        printf("even");
    }
}

int main(){
    int num;
    scanf("%d",&num);
    function(num);
    return 0;
}