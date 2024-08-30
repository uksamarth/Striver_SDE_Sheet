#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}


void insertion_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int j =i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    int nums[] = {5,4,3,2,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0;i<n;i++){
        cout<< nums[i]<<" ";
    }
    cout<<"\n";
    insertion_sort(nums,n);
    return 0;
}