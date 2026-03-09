class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size()-1,first=-1,last=-1;
        int start=0,end=n,mid;
        // finding left index
        while(start<=end){                      
            mid=end+(start-end)/2;
            if(target==nums[mid]){
                first=mid;
                end=mid-1;
            }
            else if(target<nums[mid])
            end=mid-1;
            else
            start=mid+1;
        }
        // finding right index
        start=0,end=n;
        while(start<=end){
          mid=end+(start-end)/2;
            if(target==nums[mid]){
                last=mid;
                start=mid+1;
            }
            else if(target<nums[mid])
            end=mid-1;
            else
            start=mid+1;
        }
        return {first,last};
    }
};