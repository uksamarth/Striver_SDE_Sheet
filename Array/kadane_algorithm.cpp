#include <iostream>
using namespace std;

int maxsubArraySum(int arr[], int n){
    int maxi = 0;
    int i,j,k;
    for(int i=0;i<n;i++){
        for(j=i;j<n;j++){
            int sum =0;
            for(k=i;k<=j;k++){
                sum = sum+arr[k];
            }
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}

int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = maxsubArraySum(arr, n);
    cout << "Maximum sub array sum is " << maxSum;
    return 0;
}