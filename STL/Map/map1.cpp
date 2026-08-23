#include<map>
#include<iostream>

using namespace std;
int main(){
    map <string , int> m;
    m["Tv"] = 100;
    m["Smartphone"] = 500;
    m["Laptop"] = 50;
    m["Watch"] = 200;

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }
    cout<<endl;
}