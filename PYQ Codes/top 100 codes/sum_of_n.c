#include<stdio.h>
//method 1

// void function(int num){
//     int res = num*(num+1)/2;
//     printf("%d",res);
// }

//method 2
// void sum_of(int *num){
//     int res = 0;
//     while(*num>0){
//         res +=*num;
//         (*num)--;
//     }
//     printf("%d",res);
// }
// void sum_of(int num){
//     int res = 0;
//     while(num--){
//         res +=num;
//     }
//     printf("%d",res);
// }

//method 3
int sum_of(int num, int sum){
    if(num==0){
        return sum;
    }
    return sum_of(num-1,sum+num);
}



int main(){
    int num, sum = 0;
    scanf("%d",&num);
    int res = sum_of(num,0);
    printf("%d",res);
    return 0;
}