#include <iostream>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i=0;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

int pascalTriangle(int r, int c){
    int element = nCr(r-1,c-1);
    return element;
}

int main(){
    int r,c;
    cout<<"Enter the row and column position of element in Pascal's Triangle :"<<endl;
    cin>>r>>c;
    int ele = pascalTriangle(r,c);
    cout<<"The element in position(r,c) in Pascal's Triangle is :"<<ele<<endl;
    return 0;
}