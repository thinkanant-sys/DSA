class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),sum=0,lsum=0,rsum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        rsum=sum;
        for(int i=0;i<n;i++){
            rsum=rsum-nums[i]; //If you remove rsum = rsum - nums[i] and use if (lsum == rsum - nums[i]), the logic fails because rsum never decreases. In your original code, rsum is a running total that shrinks as you move across the array. Without that update line, rsum stays equal to the total sum of the entire array for every single iteration.
            if(lsum==rsum)
            return i;
            lsum+=nums[i];
        }
        return -1;
    }
};