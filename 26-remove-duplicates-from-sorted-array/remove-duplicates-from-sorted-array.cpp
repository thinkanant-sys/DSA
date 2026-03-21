class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int index=0,element=-200; // setting element that is not there in given elements range
        for(int i=0;i<n;i++){
            if(nums[i]!=element){
                nums[index]=nums[i];
                element=nums[i];
                index++;
            }
        }
        return index;
    }
};