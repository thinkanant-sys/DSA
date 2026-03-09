class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // array containing n+1 elements because one of the element is repeated i.e. duplicate
        //Approach-1 brute force -> O(n^2)
        //Approach-2 O(n) since numbers are in the range from[1,n] so we can create an array count   [n] and initialize it with 0 denoting all the elements appears 0 times initially now traverse the original array and store the element of array in a variable (let's say index) and then in the count array increment the index of array corresponding to the element of array variable as the array size is limited from [1,n]  
        //leetsync
        int n=nums.size();
        int count[n+1]; // since the array index starts from 0 and we're mapping element with corresponding index i.e 0->0 1->1 5->5

        for(int i=0;i<=n;i++){ // initializig each element with 0 as count[n+1]={0}; gives error "variable-sized object may not be initialized" 
            count[i]=0;
        }

        for(int i=0;i<n;i++){
            int index=nums[i];
            count[index]++;
        }
        // for(int i=0;i<=n;i++){
        //     cout<<count[i]<<" ";
        // } for checking what's going on 
        
        for(int i=0;i<=n;i++){
            if(count[i]>1)
            return i;
        }
        return -1;
    }
};