#include <iostream>
using namespace std;

void sortArray(int arr[], int n){
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else if(arr[i]==2){
            two++;
        }
    }
    for(int i=0;i<zero;i++){
        arr[i]=0;
    }
    for(int i=zero;i<zero+one;i++){
        arr[i]=1;
    }
    for(int i=zero+one;i<n;i++){
        arr[i]=2;
    }
}

int main(){
    int n = 6;
    int arr[] = {0, 1, 2, 0, 1, 2};
    sortArray(arr, n);
    cout << "After sorting : "<< endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}