//Rotate Image by 90 degree

/*
    Optimized Solution state that
    step 1: transpose the matrix
    step 2: reverse the matrix
    
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>> &matrix){
    //step 1
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //step 2
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    cout<< " After rotation of the matrix: "<< "\n";
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout << matrix[i][j]<<" ";
        }
        cout <<"\n";
    }
    return 0;
}