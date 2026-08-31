#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   /*cout<<max(4,5)<< " "<< min(6,90)<<" "<<endl; //min and max
    int a =5 , b=10;
    swap(a,b);
    cout<<a<<"a : "<<b<<" b : "; // swap 
    */

    vector <int> vec ={1,2,38,40,5};
    cout<< *max_element(vec.begin(), vec.end()) <<" "<<endl;
    cout<<*min_element(vec.begin(), vec.end()) << " "<<endl;
    cout<<binary_search(vec.begin(), vec.end(), 1)<<endl;
}