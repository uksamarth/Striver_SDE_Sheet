#include <iostream>
using namespace std;

int stock_buy_sell(int arr[],int n){
    int maxi =-1;
    int mini = 1000;
    for(int i=0;i<n;i++){
        mini = min(arr[i],mini);
        maxi = max(maxi,arr[i]-mini);
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