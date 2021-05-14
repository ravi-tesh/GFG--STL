//jumbbled letters
# include<bits/stdc++.h>
using namespace std;

bool isana(string &s1, string &s2, int n, int m){

    if(n!=m) return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(), s2.end());

    if(s1==s2) 
       return true;
    else
       return false;



}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int n,m;
    n=s1.length();
    m=s2.length();

    cout<<(isana(s1,s2,n,m)?"anagram":"not anagram");



}