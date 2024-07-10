//here we are given with the number of rows and we have to print all the elements of Pascal's Triangle.
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
    for(int i=1;i<=n;i++){
    for(int c=1;c<=i;c++){
        cout<< nCr(n-1,c-1)<<" ";
    }
    cout<<"\n";
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the nth row of Pascal's Triangle :"<<endl;
    cin>>n;
    cout<<"The elements of Pascal's Triangle are :"<<endl;
    pascalTriangle(n);
    return 0;
}