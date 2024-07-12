#include <iostream>
using namespace std;

void merge_two_sorted_arr(long long arr1[], long long arr2[], int n, int m){
    long long arr3[n+m];
    int left =0;
    int right =0;
    int index =0;

    while(left<n && right <m){
        if(arr1[left]<=arr2[right]){
            arr3[index] = arr1[left];
            left++;
            index++;
        }
        else{
            arr3[index] = arr2[right];
            right++;
            index++;
        }
    }
    while(left<n){
        arr3[index++] =arr1[left++];
    }
    while(right<m){
        arr3[index++] =arr2[right++];
    }
    for(int i=0;i<n+m;i++){
        if(i<n){
            arr1[i]=arr3[i];
        }
        else{
            arr2[i-n]=arr3[i];
        }
    }

}

int main(){
    long long arr1[] = {1,5,6,9};
    long long arr2[] = {2,3,7,8,10};
    int n = 4;
    int m = 5;
    merge_two_sorted_arr(arr1,arr2,n,m);
    cout << "arr1[] = ";
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    cout << "\n";
    cout << "arr2[] = ";
    for(int i=0;i<m;i++){
        cout << arr2[i] << " ";
    }
    return 0;
}