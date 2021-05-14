//length substring find-npos reading-with-spaces all3method of string traversal c-style  
//pallidrome anagram 

#include <bits/stdc++.h>
using namespace std;

bool palli(string &ptr){
    int begin=0;
    int end=ptr.length()-1;
    while(begin<end){
        if(ptr[begin]!=ptr[end])
           return false;
        begin++;
        end--;
    }
    if(ptr.length()==0 || ptr.length()==1)
       return false;
    
    return true;
    
}


int main()
{
    string ptr="malayalam";
    
    cout<<(palli(ptr)?"palli":"not palli")<<endl;
    
    
    
}
