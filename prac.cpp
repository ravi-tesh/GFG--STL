# include<bits/stdc++.h>
using namespace std;
const int n=256;
int foo(string &s, int m){

int arr[n]={0};
fill(arr,arr+n,-1);
int res=INT_MAX;
for(int i=0; i<m;i++){
    int f=arr[s[i]];
    if(f == -1)
       arr[s[i]]=i;
    else
       res=min(res,f );

}
return (res==INT_MAX)?-1:res;

}



int main(){
    string s;
    cin>>s;
    int m=s.length();

    cout<<foo(s,m);




}

