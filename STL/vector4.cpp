#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec ={1,2,3,4,5};
     // cout<<"Vector begin : "<<*(vec.begin())<<endl;
    // cout<<"Vector end : "<<*(vec.end())<<endl;

     /*vector <int> :: iterator it; // iterator forward
    for(it = vec.begin(); it != vec.end(); it ++){
        cout<< *(it)<<" ";
    } */

    for(auto it = vec.rbegin(); it != vec.rend(); it++){ //iterator backward
        cout<<*(it)<<" ";
    }
 return 0;
}