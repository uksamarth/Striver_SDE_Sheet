#include <iostream>
#include <string>
#include<unordered_map>
#include<vector>
using namespace std;

void count(string str){
    unordered_map<char,int> mpp;
    for(int i=0;i<str.length();i++){
        mpp[str[i]]++;
    }
    for(auto it:mpp){
        cout<< it.first << " " << it.second <<endl;
    }
}

int main(){
    string str;
    getline(cin,str);
    count(str);
    return 0;
}