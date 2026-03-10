class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,pos=-1;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(target==nums[mid]){
            pos=mid;
            break;
            }
            else if(target<nums[mid]){
                pos=mid;     // as in case index position is 0 then if we might have done pos=mid-1 then it might have gone beyond index 0 i.e -1 which does not exist
                end=mid-1;
            }
            else{
                pos=mid+1;
                start=mid+1;
            }
        }
        return pos;
    }
};