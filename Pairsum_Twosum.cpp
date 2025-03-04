//also called two sum 

// for finding the index of two elements that add up to the target element

#include <iostream> 
#include <vector> 
using namespace std; 

vector <int> pairsum(vector <int> v, int target){ 
    vector <int> ans; 
    int n=v.size(); 
    int i=0, j=n-1; 
    while (i<j){  
        int pairsum= v[i]+v[j]; 
        if (pairsum<target)
        i++;
        else if (pairsum>target)
            j--;
        else{ 
        ans.push_back(i); 
        ans.push_back(j); 
        return ans; 
        }
    }  
    return ans; 
}

int main(){ 
    vector <int> a={2,7,11,15};
    vector <int> ans=pairsum(a,9); 
    cout<<ans[0]<< " and "<<ans[1]<<endl; 
    return 0; 
}
