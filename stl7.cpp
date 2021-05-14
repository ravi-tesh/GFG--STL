//mutimap can have muliple instances can not change/update value m[10]=20 
//unordered set uses hashing no order but unique elements
//unordered set uses 1 complex for insert search traversal of elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(50);
    s.insert(70);
    s.insert(50);
    s.insert(5);

    for(auto x: s){
        cout<<x<<" ";
    }
    


}