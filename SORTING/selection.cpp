#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selection_sort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(nums[j]<nums[mini]){
                mini = j;
            }
        }
        swap(nums[i],nums[mini]);
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    int nums[] = {5,4,3,2,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0;i<n;i++){
        cout<< nums[i]<<" ";
    }
    cout<<"\n";
    selection_sort(nums,n);
    return 0;
}