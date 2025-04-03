#include<iostream>
using namespace std;
int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<"The front most element of queue is "<<q.front()<<endl;
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
        
} 
cout<<endl;
cout<<q.size()<<endl;
}

