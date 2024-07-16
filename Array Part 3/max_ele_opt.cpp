#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();
    map<int, int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i =0;i<n;i++){
        if(mp[arr[i]]>n/2){
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3,5,2,4, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}