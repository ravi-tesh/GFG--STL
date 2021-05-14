// //check for subsequence
// # include<bits/stdc++.h>
// using namespace std;
// bool subseq(string &s1 , string &s2, int n, int m){
//     int j=0;
//     for(int i=0;i<n && j<m;i++){
//         if(s1[i]==s2[j])
//         j++;
        
//     }
//     return j==m;

// }


// int main(){
// string s1,s2;
// cin>>s1>>s2;
// int n=s1.length();
// int m=s2.length();

// cout<<(subseq(s1,s2,n,m)?"yes":"no");

// }

//optimised using reccursion
# include<bits/stdc++.h>
using namespace std;
bool subseq(string &s1 , string &s2, int n, int m){
   
   if(n==0) return false;
   if(m==0) return true;

   if(s1[n-1]==s2[m-1])
      return subseq(s1,s2,n-1,m-1);
    else
      return subseq(s1, s2,n,m-1);

}



int main(){
string s1,s2;
cin>>s1>>s2;
int n=s1.length();
int m=s2.length();

cout<<(subseq(s1,s2,n,m)?"yes":"no");

}
