#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
    int n = arr.size();
    //sort the given interval
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    for(int i=0;i<n;i++){
        if(res.empty() || arr[i][0]>res.back()[1]){
            res.push_back(arr[i]);
        }
        else{
            res.back()[1] = max(res.back()[1], arr[i][1]);
        }
    }
    return res;
}

int main(){
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};;
    vector<vector<int>> res;
    res = mergeOverlappingIntervals(arr);
    cout << "The merged intervals are :"<<"\n";
    for(int i = 0; i < res.size(); i++){
        cout <<"[" << res[i][0] << ", " << res[i][1] << "]";
    }
    return 0;
}