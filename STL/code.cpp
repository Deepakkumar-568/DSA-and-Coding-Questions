#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> v; // 0 size
v.push_back(1); // insert
v.push_back(2);
v.push_back(3);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl; 

}