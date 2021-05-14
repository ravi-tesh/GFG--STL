//count the occurences of a character using char array


# include<bits/stdc++.h>
using namespace std;
const int CHAR=256;

char countchar(string &s, int n)
{
    int count[CHAR]={0};
    for(int i=0;i<n;i++){
        count[s[i]]++;

    }
    for(int i=0; i<n;i++){
        if(count[s[i]]==1)
        {
        return s[i];
        }
    }
    return '/0';


}


int main(){
string s;
cin>>s;
int n=s.length();
cout<<countchar(s,n);



}