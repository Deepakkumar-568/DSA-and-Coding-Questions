#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter a Number";
    cin>>n;
     if(n==0){
        return 1;
    }
    else{
        while(n>0){
            n = n/10;
            count ++;
        }
    }
    cout<<"Number of Digits : "<< count;
    return 0;

}