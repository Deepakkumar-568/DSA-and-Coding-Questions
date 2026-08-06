#include<iostream>
using namespace std;
 
int Linearsearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,2,7,8,9,10};
    int size= 5;
    int target= 9;
    cout<<Linearsearch(arr, size, target)<<endl;
    return 0;
}