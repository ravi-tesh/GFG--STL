//remove all the given  occur of a character in a string
#include<bits/stdc++.h>
using namespace std;
// void removeChar(string s, int n , char ch){

    
       
//     }
    
// }

int main(){
    string s;
    cin>>s;
    int n=s.length();
    char ch; cin>>ch;
    for(int i=0; i<n;i++){
        if(s.find(ch)!=string::npos)
           s.erase(s[i]);
        else 
           continue;

    }
    for(int i=0; i<n;i++){
        cout<<s[i];
    }
          


}