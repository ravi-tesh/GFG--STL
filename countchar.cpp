//count the occurences of a character using char array


# include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int countchar(string &s, int n, char &c){
    int count[CHAR]={0};
    for(int i=0;i<n;i++){
        count[s[i]]++;

    }
    for(int i=0; i<n;i++){
        if(s[i]==c)
        {
        return count[s[i]];
        }
    }
    return -1;


}


int main(){
string s;
cin>>s;
int n=s.length();
char c;
cin>>c;
cout<<countchar(s,n,c);



}