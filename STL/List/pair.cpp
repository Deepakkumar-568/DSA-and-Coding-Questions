#include<iostream>
using namespace std;
int main(){
   /*pair <int , int> p = { 1,2};
  cout<<p.first<<endl;
  cout<<p.second<<endl;
  */ 
   /*pair <string, int> p = { "Deepak",2};
  cout<<p.first<<endl;
  cout<<p.second<<endl;
 */ 
 pair <int , pair<char,int>> p ={1,{'d',89}};
 cout<<p.first<<endl;
 cout<<p.second.first<<endl;
 cout<<p.second.second<<endl;
}