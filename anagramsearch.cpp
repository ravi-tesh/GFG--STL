# include<bits/stdc++.h>

using namespace std;

bool angSearch(string &s1, string &s2, int n, int m){

    if(n!=m) return false;
    return ((s1+s2).find(s2)!=string::npos);

}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    cout<<angSearch(s1,s2,n,m);


}