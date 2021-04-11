# include<bits/stdc++.h>
using namespace std;

template <typename T>
T arrMax(T arr[],int n ){
    T res = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>res){
        res=arr[i];
        }
    

    }
    return res;
}


int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<arrMax <int> (arr,3);
    

}