class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int start=1,end=n-2; // As for index=0,n-1 we already specified conditions and it
        // prevents from overflow & underflow scenario
        while(start<=end){
            int mid=start+(end-start)/2;
            if((nums[mid]!=nums[mid-1]) && (nums[mid]!=nums[mid+1])) 
            return nums[mid];
            else{
            if((mid%2==1 && nums[mid-1]==nums[mid]) || (mid%2==0 && nums[mid]==nums[mid+1])) // left half does not contain mid so trim the left half
            // remember 0 is an even number so next index i.e. odd index (rightvalue is compared)
            start=mid+1;
            else
            end=mid-1;
            }
        }
        return -1;
    }
};