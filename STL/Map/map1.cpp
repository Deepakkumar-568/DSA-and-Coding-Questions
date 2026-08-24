#include<map>
#include<iostream>

using namespace std;
int main(){
    map <string , int> m;
    m["Tv"] = 100;
    m["Smartphone"] = 500;
    m["Laptop"] = 50;
    m["Watch"] = 200;
    m.insert({"camera",250}); //To insert new key and value
    m.erase("Tv");

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }
    cout<<endl;
    cout<<"Count:"<<m.count("Laptop")<<endl; //To count the key 
    cout<<"Count of value:"<<m["Laptop"]<<endl; //To print the value of key
    return 0;
}