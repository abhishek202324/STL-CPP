#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> m;
    m[1]="Abhishek";
    m[2]="Himank";
    m[3]="Sarthak";

    cout<<"Key 1 "<<m[1]<<endl;
    cout<<"key 2 "<<m[2]<<endl;
    cout<<"key 3 "<<m[3]<<endl;

    
}