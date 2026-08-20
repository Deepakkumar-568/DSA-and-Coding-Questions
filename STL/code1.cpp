#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6); // add element in the back
    vec.pop_back(); // remove the element from the back
    for(int print : vec){
        cout<<print<<" ";
        }
        cout<<endl; 
        cout<<"Vale at index 2 is : "<< vec[2] << " or "<< vec.at(2)<<endl; // vec[]  for index
        cout<<"Front element"<<vec.front()<<endl; //First element
        cout<<"Back element"<<vec.back()<<endl;   // Back element
        return 0;
}