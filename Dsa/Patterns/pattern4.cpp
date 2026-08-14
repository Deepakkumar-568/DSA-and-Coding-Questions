#include<iostream>
using namespace std;
void print(int n){
    for(int i = 1; i<=n; i ++){
        for(int j = 0; j<i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}
/* Output - 4
1
22
333
4444*/