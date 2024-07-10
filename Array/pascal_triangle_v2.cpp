//here we are given with the number of rows and we have to print all the rows elements of Pascal's Triangle.
#include <iostream>
using namespace std;

int nCr(int n,int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res =res/(i+1);
    }
    return res;
}
void pascalTriangle(int n){
    for(int c=1;c<=n;c++){
        cout<< nCr(n-1,c-1)<<" ";
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the nth row of Pascal's Triangle :"<<endl;
    cin>>n;
    cout<<"The elements in "<<n<<"th row of Pascal's Triangle are :"<<endl;
    pascalTriangle(n);
    return 0;
}