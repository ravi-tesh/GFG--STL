# include<bits/stdc++.h>
using namespace std;

int secondlg(int arr[], int n){
     int res=-1;int lg=0; 

    for(int i=1; i<n;i++){

        if(arr[i]>arr[lg]){
            res=lg;
            lg=i;
        }
        else if(arr[i]>arr[res] || res==-1){
            res=i;
        }

    }
    return res;


}



int main(){
    int arr[]={232,232,232,232};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondlg(arr,n)<<endl;



}