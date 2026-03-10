class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        int start=0,end=n-1;
        int pivot_index=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=arr[pivot_index]){    //left half sorted
                pivot_index=mid;
                start=mid+1;
            }
            else{                           // left half may contain largest element
                end=mid-1;
            }
    }
    return ((pivot_index+1)%n);            // returning highest element (index + 1) %n
    }                                     // as it returns the no. of times array is rotated
};
