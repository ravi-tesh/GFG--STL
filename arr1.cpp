// //traversal in array
// # include<bits/stdc++.h>
// using namespace std;
// int traversal(int arr[],int n, int s){
//     for(int i=0; i<n;i++){
//         if(arr[i]==s){
//             return i;
//         }
        
//     }
    
// return -1;

// }

// int main(){
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
//     int s;cin>>s;
//     cout<<traversal(arr,n,s);



// }
 # include<bits/stdc++.h>
 using namespace std;
int insert(int arr[], int n, int s){

    // if(n==s)

    // int j=s-1;
    // for(int i=n-1; i>=j;i--){

    //     arr[i+1]=arr[i];

    // }
    // arr[j]=s;
    return n+1;

}



int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int s;cin>>s;
    int m=insert(arr,n,s);
    for(int i=0;i<m;i++){
        cout<<arr[i];
    }

    
}
