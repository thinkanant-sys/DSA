class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int start=0,end=m,ans=-1;
        while(start<=end){
            int n1=n;
            long mid=start+(end-start)/2;
            long result=1;
            while(n1>=1){
                result=result*mid;
                n1--;
            }
            if(result==m){
                ans=mid;
                return ans;
            }
            else if(result<m){
                // ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};