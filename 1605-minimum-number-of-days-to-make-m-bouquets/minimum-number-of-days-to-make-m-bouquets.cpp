class Solution {
public:
    int possibleDay(vector<int>& arr,int day,int k){
        int n=arr.size();
        int count=0,ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day) // <=day because we're considering lesser bloom days as well 
            count++;          // when checking higher day value
            else{
                ans+=(count/k);
                count=0;
            }
        }
        ans+=(count/k); // if else part not executed then also we've to add count
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size(),min=bloomDay[0],max=bloomDay[0],val=-1;
        for(int i=1;i<n;i++){
            if(bloomDay[i]<min)
            min=bloomDay[i];
            if(bloomDay[i]>max)
            max=bloomDay[i];
        }
        if(n<(long long)m*k) return -1; // as upon multiplication which might overflow, intermediadte result of m*k stored in long and overall compared as n automatically type casted
        // else m*k would have type casted to int because n is int casuing problem
        int start=min,end=max,days=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            val=possibleDay(bloomDay,mid,k); // answer is storing the return value from possible function, it can be lesser than m, equal to m and greater than m 
            if(val>=m){ 
            days=mid;  // since we checked for mid value if possible then days store possible 
            end=mid-1;  // answer i.e. mid
            }
            else
            start=mid+1;
        }
        return days; //start would also return the same value as at the end start points to 
    }                  // the possible answer 
};