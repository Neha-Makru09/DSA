// where you take the floor division of the size of the array n with 2 i.e. [n/2] 
// next, you return the element that has a frequency higher than this n/2 
// The Moore's voting algorithm 



class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int freq=0, ans=0;
       int n= nums.size(); 
       for (int i=0;i<n;i++){
        if (freq==0){
            ans=nums[i]; 
        }
        if (ans==nums[i]){
            freq++; 
        }
        else 
        freq--; 
       }
       return ans; 
    }
};
