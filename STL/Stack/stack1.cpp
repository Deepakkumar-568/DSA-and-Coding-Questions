#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    while(!s.empty()){ //Print the stack
        cout<<s.top()<<" ";
        s.pop();
 }

}