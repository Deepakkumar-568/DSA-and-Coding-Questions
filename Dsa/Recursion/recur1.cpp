#include<iostream>
using namespace std;
void print(int n){
    if(n==0)
    return ; //Base condition
cout<<n<<" "<<endl;
print(n-1); //Recursive condition

}
int main(){
    print(10);
    return 0;
}