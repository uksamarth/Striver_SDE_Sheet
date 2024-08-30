#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

// void bubble_sort(int nums[],int n){
//     for(int i=n-1;i>0;i--){
//         for(int j=0;j<i+1;j++){
//             if(nums[j]>nums[j+1]){
//                 swap(nums[j],nums[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ";
//     }
// }
void bubble_sort(int nums[],int n){
    for(int i=n-1;i>0;i--){
        int didswap = 0;
        for(int j=0;j<i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                didswap = 1;
            }
        }
        if(didswap==0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}


int main(){
    int nums[] = {1,2,3,4,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0;i<n;i++){
        cout<< nums[i]<<" ";
    }
    cout<<"\n";
    bubble_sort(nums,n);
    return 0;
}