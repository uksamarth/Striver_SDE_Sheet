#include<iostream>

using namespace std;

void sec_largest(int arr[],int n){
    if(n<2) {
        cout<<"There is no 2nd largest element";
    }
    int first = -1, second = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]<first){
            second = arr[i];
        }
    }  
    cout<< second;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    sec_largest(arr,n);
    return 0;
}