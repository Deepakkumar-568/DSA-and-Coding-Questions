#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> d = {1,2,3,4,54}; //Same as list operations
    d.pop_back();
    d.pop_front();
    for(int print : d){
        cout<<print<<" ";
    }
    cout<<d[2]<<" "<<endl;


}