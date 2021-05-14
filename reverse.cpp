# include<bits/stdc++.h>
using namespace std;

void rev(char str[], int n){
    int start=0;
    for( int end=0;end<n;end++){
        if(str[end]==' ')
        {
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}



void reverse(char str[],int low, int high){
    
    while(low<high){
        swap(str[low],str[high]);
        low++;
        high--;

    }
}

int main()
{
string s="Geeks for geeks";
int n=s.length();

char str[n];
strcpy(str,s.c_str());




}