//Kadane Algorithm for finding the subarray with the max sum 
//The brute force way for finding the subarrays of an array 


#include <iostream>
#include <vector>  
using namespace std; 

int main(){ 
    int n=5; 
    int a[5]={1,2,3,4,5}; 

    for (int st=0;st<n;st++){ 
        for (int end=st;end<n;end++){
            for (int i=st;i<=end;i++){
                cout<<a[i]; 
            }
            cout<<" "; 
        }
        cout<<endl; 
    }
    return 0; 
} 

//now, onto the Brute force method of Kadane algorithm 


#include <iostream>
#include <climits>  //climits is imppp if you wanna make use of the INT_MIN function
using namespace std; 

int main(){ 
    int n=5; 
    int a[5]={1,2,3,4,5}; 

    int maxSum=INT_MIN; 

    for (int st=0;st<n;st++){ 
        int curSum=0; 
        for (int end=st;end<n;end++){
            curSum+=a[end]; 
            maxSum=max(maxSum, curSum); 
        }
    }
    cout<<"The maximum sum of the subarray is: "<<maxSum; 
    return 0; 
}



//leetcode problem 53 Maximum subarray 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0, maxsum=INT_MIN; 
        for(int x: nums){ 
            cursum+=x; 
            maxsum=max(maxsum, cursum); 
            if (cursum<0)
            cursum=0; 
        }
        return maxsum; 
    }
};




// optimal code for the Kadane algorithm 

#include <iostream>
#include <climits>  
using namespace std; 

int main(){ 
    int n=5; 
    int a[5]={-1,-2,-3,-4,-5}; 

    int maxSum=INT_MIN;
    int curSum=0;  

    for (int st=0;st<n;st++){ 
        curSum+=a[st]; 
        maxSum=max(maxSum, curSum);
        
        if (curSum<0)
        curSum=0;    
    }
    cout<<"The maximum sum of the subarray is: "<<maxSum; 
    return 0; 
}
