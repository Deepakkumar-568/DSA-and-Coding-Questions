#include<algorithm>
#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
     /*int arr[5]={1,8,5,9,7};
    sort(arr , arr + 5);
    for(auto val : arr){
        cout<<val<<" ";
    } */
    /* vector <int> vec = {2,8,3,4,5,20}; //Sorting in ascending order
   sort(vec.begin(), vec.end());
   for( auto val : vec){
    cout<<val<<" ";
   } */
    vector <int> vec = {2,8,3,4,5,20}; //Sorting in descending order
   sort(vec.begin(), vec.end(), greater<int>());
   for( auto val : vec){
    cout<<val<<" ";
   }
   return 0;

}