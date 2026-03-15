class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=nums[0],sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max)
            max=nums[i];
        }
        int start=1,end=max;
        int ans=-1;
        while(start<=end){
            sum=0;
            int mid=start+(end-start)/2;
            for(int i=0;i<nums.size();i++){
            sum+=ceil(double(nums[i])/mid);
            }
            if(sum<=threshold){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;   }
};