#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &arr){
    int n = arr.size();
    int el;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt = 1;
            el = arr[i];
        }
        else if(el == arr[i]) cnt++;
        else cnt--;
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        return el;
    }
    
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}