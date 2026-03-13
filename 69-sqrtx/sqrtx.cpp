class Solution {
public:
    int mySqrt(int x) {
        int start=0,end=x,ans=0;
        while(start<=end){
            long mid=start+(end-start)/2;
            long result=mid*mid;
            if(result==x){
            ans=mid;     // it stores ans value when exact match is found
            return ans;
            }
            else if(result<x){
            ans=mid;   // we're doing this because if the answer is in fraction then it 
            start=mid+1; // would store nearest integers otherwise it would just return 
            }              // initially stored value in answer which is 0
            else{
            end=mid-1;   // eliminating right half as it can't be our answer as it is aklready
            }              // exceeding
        }
        return ans;
    }
};