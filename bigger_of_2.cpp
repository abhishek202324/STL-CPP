#include<iostream>
using namespace std;
int BiggerOfTwo(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<BiggerOfTwo(a,b)<<endl;
}