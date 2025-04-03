#include<iostream>
using namespace std;
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout<<"The top most element of stack is "<<s.top()<<endl;
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
        
} 
cout<<endl;
cout<<s.size()<<endl;
}

