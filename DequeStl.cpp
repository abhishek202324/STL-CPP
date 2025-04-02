#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){
    deque <int> l;
    //l.emplace_back(0);
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    l.push_front(6);
    l.pop_back();
    l.pop_front();

    for(int deqe:l){
        cout<<deqe<<" ";
    }
    cout<<endl;
    


}