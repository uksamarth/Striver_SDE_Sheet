#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Duplicate_missing(vector<int> &a){
    int n = a.size();
    int hash[n+1] {0};

    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int repeat = -1, missing = -1;
    for(int i=1;i<=n;i++){
        if(hash[i]==2){
            repeat =i;
        }
        else if(hash[i]==0){
            missing = i;
        }
        if(repeat != -1 && missing !=-1){
            break;
        }
    }
    return {repeat,missing};
}

int main(){
    vector<int> a = {3,1,2,5,3};
    vector<int> ans = Duplicate_missing(a);
    cout<< "the duplicate and missing elements are : {";
    cout << ans[0] << "," << ans[1] << "}";
    return 0;
}