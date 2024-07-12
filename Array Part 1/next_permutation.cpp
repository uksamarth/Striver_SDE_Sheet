#include <iostream>
#include <vector>  // Add this line to include vector header
#include <algorithm>  // Include algorithm for reverse and swap
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A){
    int n = A.size();

    //step 1: find the first element from the right which is smaller than the element next to it
    int ind = -1;
    for(int i=n-2; i>=0;i--){
        if(A[i]<A[i+1]){
            ind = i;
            break;
        }
    }
    //if no such element is found, then the array is in decreasing order and is the last permutation
    if(ind == -1){
        reverse(A.begin(), A.end());
        return A;
    }
    // step2 : find the element which is just greater than the element at ind
    for(int i=n-1;i>ind;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }
    //step 3: reverse the array from ind+1 to n-1
    reverse(A.begin()+ind+1,A.end());
    return A;
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);
    cout << "The next permutation is: [";
    for(auto it : ans){
        cout << it << " ";
    }
    cout << "]" << endl;  // Added endl for newline

    return 0;
}