class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int index=n;
        int start=0,end=n-1;
        while(start<=end){
            int mid=end+(start-end)/2;
            if(arr[mid]>=target){
                index=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return index;
    }
};
