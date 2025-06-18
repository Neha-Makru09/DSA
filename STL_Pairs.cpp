#include <iostream> 
using namespace std; 

int main(){ 
    
    pair<int, int> p={2,3}; 
    cout<<p.first<<endl; 
    pair <int, pair<int, int>> p1={1,{2,3}}; 
    cout<<p1.first<<" "<<p1.second.first<<" "<<endl; 
    pair<int, int> arr[]={{1,2}, {3,4},{5,6}}; 
    cout<<arr[1].second<<endl; 
    return 0; 
} 
