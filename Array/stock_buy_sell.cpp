#include <iostream>
using namespace std;

int stock_buy_sell(int arr[],int n){
    int maxi =-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxi = max(arr[j]-arr[i],maxi);
        }
    }
    return maxi;
}

int main(){
    int arr[]= {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = stock_buy_sell(arr,n);
    cout << "Maximum profit is : " << max << endl;
    return 0;
}