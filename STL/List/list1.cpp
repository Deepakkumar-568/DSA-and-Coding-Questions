#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l; 
     // list <int> l={ 1,2,3,4};
    l.push_back(1); //Insert Value form back
    l.emplace_back(2);
    l.push_front(3); // Insert value from front
    l.push_front(4);
    l.pop_back(); //Delete element from back
    l.pop_front(); // Delete element from front
    for( int print : l){ //Print the value
        cout<<print<<" ";
    }
   
}