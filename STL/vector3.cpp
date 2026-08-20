#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector <int> v = {12,22,33,44,75,96,97}; 
   // v.erase(v.begin());  //Delete the element at first
   // v.erase(v.begin()+ 2);// Going to the next element
   // v.erase(v.begin()+2, v.begin() + 4); // Delete element form 2 to 3 position
   //v.insert(v.begin() + 2, 100); // Inster element 100 in position 2
   v.clear();
    for(int print : v){
        cout<<" "<<print;
    }
    cout<<endl;
    cout<<"Vector size: " << v.size() << "Vector capacity : "<< v.capacity()<<endl;
    cout<<"Is Vector empty"<<v.empty()<<endl;
    return 0;.
}