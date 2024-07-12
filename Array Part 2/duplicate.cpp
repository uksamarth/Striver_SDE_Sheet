#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
}

int main(){
    vector<int> arr ={ 1,2,4,6,3,2};
    cout << "The duplocate element is : "<< findDuplicate(arr) <<endl;
    return 0;
}