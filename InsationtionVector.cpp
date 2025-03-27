#include <iostream>
#include<vector>

using namespace std;


int main() {
   vector <int> hello;// one way to assgin
   vector <int> vec(10,1);// 10 size ka array banega and har value 1,1,1 hogii
   for (size_t i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
}
cout << endl;


    return 0;
}
