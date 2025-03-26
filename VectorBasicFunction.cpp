#include<iostream>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(10);//this is push_back function us the push the element in array
    vec.push_back(11);
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);

    vec.pop_back(); //use to pop the element from the array last
    vec.emplace_back(15);
    for(int val:vec){
        cout<<val<<" ";

    }
    cout<<endl;
    cout << "Size of the vector: " << vec.size() << endl;//RETURN THE SIZE OF THE PRESENT VECTOR 
    cout << "Capacity of the vector: " << vec.capacity() << endl;// USE TO PRINT THE CAPCARTIY OF THE VECTOR HOW MUCH ELMENT IT CAN HOLD
    

    //at and or fuction
    cout<<"The value at index 3 is :"<<vec.at(3)<<endl;
    
    cout<<"The value at index 3 is :"<<vec[3]<<endl;

    //front and back fuction that return the first and last element of the array
    cout<<"The front of the vector is "<<vec.front()<<endl;
    cout<<"The last  of the vector is "<<vec.back()<<endl;
    

    






    
}