#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout<<"Array before poping element ";
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"Array after poping the last element ";
    v.pop_back();
    for(int num:v){
        cout<<num<<" ";
    }
}
