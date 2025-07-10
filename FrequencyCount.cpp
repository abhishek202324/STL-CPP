#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> res={1,3,4,3,2,2,2,1,1,1,2,4,4,4};
    unordered_map<int,int> freq;
    for(int x:res){
        freq[x]++;
    }
    for(auto it:freq){
        cout<<"Element: "<<it.first<<" Frequency "<<it.second<<endl;
    }

}