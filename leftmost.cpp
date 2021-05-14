// //the leftmost reapeating ..we are seeing the leftmost of first occur letter
// # include<bits/stdc++.h>
// using namespace std;
// int leftmost(string &s1, int n){
//     for(int i=0; i<n;i++){
//         for(int j=i+1; j<n;j++){
//             if(s1[i]==s1[j])
//                return i;
//         }

//     }
//     return -1;



// }



// int  main(){

//     string s1;
//     cin>>s1;
//     int n=s1.length();
   

//     cout<<leftmost(s1,n);


// }
//optimised using character array


# include<bits/stdc++.h>
using namespace std;
const int csize=256;
int leftmost(string s, int m){
    int arr[csize]={0};
    fill(arr,arr+csize,-1);
    int res= INT_MAX;
    for(int i=0; i<m;i++){
        int f=arr[s[i]];//stores the -1 value of the given char 
        if(f == -1)
           arr[s[i]]=i;
        else
           res=min(res,f);
           
         

    }
    return (res== INT_MAX)?-1:res;



}




int main(){

string s;
cin>>s;
int m =s.length();
cout<<(leftmost(s,m));


}

