#include<queue>
#include<iostream>
using namespace std;
int main(){
     // priority_queue<int> pq; Largest number first
    priority_queue<int, vector<int> , greater<int>> pq; // Smallest to largest
    pq.push(1);
    pq.push(89);
    pq.push(4);
    pq.push(34);
    pq.push(2);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}