class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int start=0,end=nums.size()-1;
        // while(start<=end){
        // if(nums[start]+nums[end]==target)
        // return {start,end};
        // else if(nums[start]+nums[end]<target)
        // start++;
        // else
        // end--;
        // }
        // return {-1,-1};
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)
                return{i,j};
            }
        }
        return{-1,-1};
    }
};