class Solution {
public:
    int findMin(vector<int>& nums) {
        // array of unique elements
        // since the (max. element's index + 1) % n represents the the kth rotation of array
        // i.e. it is the min. element's index
        // 0th time rotated means 0th index element is smallest
        int n=nums.size();
        int start=0,end=n-1;
        int pivot=start;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(nums[mid]>nums[pivot]){
            pivot=mid;
            start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return nums[(pivot+1)%n];
    }
};