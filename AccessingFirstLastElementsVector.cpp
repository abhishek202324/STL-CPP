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
    
    
    
    cout<<"The frist element of the array " <<v.front()<<endl;
    cout<<"The last element of the arrat "<<v.back();
    cout<<endl;

}
