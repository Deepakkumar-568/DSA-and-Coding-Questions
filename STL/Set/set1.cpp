#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> s;
    s.insert(1); //Insert the value
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    cout<<"Size of set : "<<s.size()<<endl;
    cout<<"Lower Bound : "<<*(s.lower_bound(4))<<endl; 
    cout<<"Upper Bound : "<<*(s.upper_bound(4))<<endl;
    for(int print : s){
        cout<<print<<" ";
    }
}