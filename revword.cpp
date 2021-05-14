# include<bits/stdc++.h>
using namespace std;

void reverse(char str[], int low, int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;

    }
}

void revword(char str[],int l){
    int start=0;
    for(int end=0;end<l;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end-1;

        }

    }
    reverse(str, start, l-1);
    reverse(str, 0, l-1);


}

int main(){

    string s="geeks for geeks";
    int l=s.length(); 
    char str[l];
    strcpy(str,s.c_str());

   revword(str,l);





}