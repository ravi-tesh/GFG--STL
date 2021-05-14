//unique elements
#include <bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int,int> s;
    s[10]=30;
    s[70]=22;
    s[40]=56;
    s[40]=56;//unique elements
    s.insert({90,200});

    for(auto x: s){
        cout<<x.first<<" "<<x.second<<endl;

    }

    if(s.find(10)!=s.end())
       cout<<"found";
    else 
       cout<<"not found";
       


}