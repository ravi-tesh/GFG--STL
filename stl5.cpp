//set set-greaterset find erase log(n)-->insert,find count 
//cout func finds the occurance of the count of a function and in a set we have only unique elements so 1 or 0 is return allways

# include<bits/stdc++.h>
using namespace std;



int main(){
    set<int> s;
    // set<int,greater<int>> s;

    s.insert(20);
    s.insert(35);
    s.insert(25);
    s.insert(78);
    s.insert(22);
    s.insert(20);
    
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }
    
    cout<<s.count(2);    
    if(s.find(35)!=s.end())
       cout<<"found";
    else
       cout<<"notfouns";


    }