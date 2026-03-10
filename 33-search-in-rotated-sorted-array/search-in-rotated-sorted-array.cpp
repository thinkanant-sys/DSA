class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();  
        int start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;      
            if(target==nums[mid])
            return mid;
            else if(nums[mid]>=nums[start]){                 
                if(target>=nums[start] && target<=nums[mid])
                end=mid-1;
                else 
                start=mid+1;
            }
            else{
                if(target>=nums[mid] && target<=nums[end])
                start=mid+1;
                else
                end=mid-1;
            }              // in rotated array one of the half would surely be sorted so we've 
        }            // to identify that sorted half and search our target element in that half
        return -1;
    }
};