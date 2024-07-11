#include <iostream>
using namespace std;

long long maxsubArraySum(int arr[], int n){
    long long maxi = -1;
    long long sum =0;
    int i;
    for(int i=0;i<n;i++){
        sum = sum+ arr[i];
        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    long long maxSum = maxsubArraySum(arr, n);
    cout << "Maximum sub array sum is " << maxSum;
    return 0;
}