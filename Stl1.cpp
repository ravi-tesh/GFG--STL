# include<bits/stdc++.h>

using namespace std;

template<typename T>
T Myfunc(T x, T y){
    
    return (x>y)?x:y;
    
}

int main(){
cout<<"hello world\n";
cout<< Myfunc<int>(78,34)<<endl;
cout<<Myfunc<int>(45.89,2.34);


}