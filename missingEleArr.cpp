//n an array 1-100 numbers are stored, one number is missing how do you find it?

#include<bits/stdc++.h>
using namespace std;

int missing(int arr[], int n){
    int sum=0;
    int actual_sum=n(n+1)/2
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    


}


int main(){
    int arr[1000];
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missing(arr,n);
    




}