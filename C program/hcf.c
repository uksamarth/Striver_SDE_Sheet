#include<stdio.h>

int hcf(int arr[],int n){
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int res = arr[0];
    for(int i =1;i<n;i++){
        res = gcd(arr[i],res);
    }
    return res;
}

int main(){
    int n = 5;
    int arr[5] = {2, 6, 4, 8, 10};
    int res = hcf(arr,n);
    printf("%d",res);
    return 0;
}

for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        if()
    }
}