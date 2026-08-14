#include<iostream>
using namespace std;
void print(int n){
    for(int i =0; i<n; i++){
        for(int j =1; j<n-i+1; j++){
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

/*Output- 4
00000
1111
222
33
4*/