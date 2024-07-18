#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);
    v.push_back(4);

    //iterator
    vector<int>::iterator it v.begin();
    it++;
    cout << *it<<endl;
    it = it+2;
    cout << *it << endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }
    for(auto it = v.begin(); it!=v.end();it++){
        cout << it << " ";
    }
    for(auto it : v){
        cout << it << " ";
    }

}

void explainList(){
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(5);
}


int main(){
    explainVector();
    return 0;
}