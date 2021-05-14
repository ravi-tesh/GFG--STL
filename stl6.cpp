//map also sorts the data in accending order of key not values uses logn function uses self balancing bst
#include<bits/stdc++.h>
using namespace std;

int main()
{
map<int,int> m;
m.insert({10,330});
m.insert({2,200});
m.insert({30,700});
m.insert({30,700});//unique key value only
m[202]=303;
// cout<<m[2];

// for(auto x: m){
//     cout<<x.first<<":"<<x.second<<" ";
    
// }
// cout<<endl;
// m[10]=400;
// for(auto x: m){
//     cout<<x.first<<":"<<x.second<<" ";n
    
// }
for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

// if (m.find(2)!=m.end())//so it only take key as argument and finds, not value like 200
//    cout<<"found";
// else
//    cout<<"not found";

//    cout<<m.count(2);//key -->1
   
   //cout<<m.count(330);//value --->0 does not work

}