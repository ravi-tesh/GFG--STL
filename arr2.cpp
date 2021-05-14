// # include<bits/stdc++.h>
// using namespace std;

// int largest(int arr[], int n){
//     int res=0;
//     for(int i=0; i<n;i++){
//         if(arr[i]>arr[res])
//            res=i;

//     }
//     return res;
// }

// int secondlg(int arr[], int n){
//     int lg=largest(arr,n);
//     int res=-1;

//     for(int i=0; i<n;i++){
        
        
//         if(arr[i]!=arr[lg]){

//             if(res==-1)
//                res=i;
//             else if(arr[i]>arr[res])
//                {
//                    res=i;
//                }
               
//         }


//     }
//     return res;
// }

// int main(){

//     int arr[]={20,56,24,77,700};
//     int n=sizeof(arr)/sizeof(arr[n]);
//     cout<<secondlg(arr,n);

// }

//to rotate an array in one traversal

# include<bits/stdc++.h>

using namespace std;
void rotate(int arr[], int n)

{
    int low=0; int high=n-1;
    while(low < high){
        swap(arr[low],arr[high]);
        low++;
        high--;

    }


}

int main(){

int arr[6]={40,33,24,67,7,86};

int n=sizeof(arr)/sizeof(arr[0]);

rotate(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}




}