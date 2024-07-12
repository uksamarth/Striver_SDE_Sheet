#include <iostream>
#include <algorithm>
using namespace std;

void merge_two_sorted_arr(long long arr1[], long long arr2[], int n, int m){
    int left = n-1;
    int right =0;
    while(left>=0 && right<m){
        if(arr1[left]>arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else if(arr1[left]<=arr2[right]){
            break;
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
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