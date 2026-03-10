class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) //only one element in array then it itself is greatest
        return 0;
        if(nums[0]>nums[1]) // if first element is greatest
        return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) // if last element is greatest
        return nums.size()-1;
        int start=1,end=nums.size()-2;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) // when the element is 
            return mid; // greater i.e. both left and right side element is lesser than curent 
            else if(nums[mid]>nums[mid-1]) //nums[mid]>nums[mid+1] false i.e. right half is big
            start=mid+1;
            //else if(nums[mid]>nums[mid+1]) //means nums[mid-1]>nums[mid] i.e. left half is big
            //end=mid-1;
            //multiple peaks
            else if(nums[mid]>nums[mid+1]) 
             end=mid-1;   

            //if both false i.e. both the halves are bigger i.e. [1,5,1,2,1] middle 1
            else
            end=mid-1; // go to either left half or right half i.e start=mid+1 also true

        }
        return -1; // as the function is expecting int to be returned although it won't ever execute
    }
};