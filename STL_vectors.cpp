#include <iostream> 
#include <vector>
using namespace std; 

int main(){ 
    vector <int> v={1,2,3,2}; 
    v.push_back(3); 
    v.emplace_back(4); 
    for (auto x: v){
        cout<<x<<" "<<endl; 
    }
    vector <pair<int, int>> p; 
    p.push_back({1,2}); 
    p.emplace_back(4,5); 
    
    vector <int> p1(5); 
    vector <int> p2(5,40); 
    p1.push_back(45); 
    for (auto o: p1){
        cout<<o<<" "<<endl; 
    }
    
    vector <int> p3(7,10); 
    for (auto it: p3){ 
        cout<<it<<" "<<endl; 
    } 
    
    v.erase(v.begin()+1); 
    for (auto i: v){ 
        cout<<i<<" "<<endl; 
    } 
    return 0; 
} 
