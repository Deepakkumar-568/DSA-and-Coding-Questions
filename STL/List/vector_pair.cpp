#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <pair<int ,int>> vec = {{1,2},{3,4}, {5,6}};
    vec.push_back({7,8}); //insert
    vec.emplace_back(9,10); //insert in place of object created
    for(auto p : vec){
        cout<<p.first<< " "<<p.second<< " ";

    }

}