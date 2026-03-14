class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max=piles[0],n=piles.size();
        for(int i=1;i<n;i++){    // to find out maximum value in the array
            if(piles[i]>max)
            max=piles[i];
        }
        int start=1,end=max;
        long ans;  // ans can lie in range from 1 to max(array)
        while(start<=end){
            ans=0;              
            int mid=start+(end-start)/2;
            for(int i=0;i<n;i++){  // finding out ceil value as integer division may result 
                ans+=ceil((double)piles[i]/(double)mid); // less value as it rounds off to
            }                                               // nearest integer value 
            if(ans>h){
                start=mid+1;    // if ans>h means taking more hours than given h hours
            }  // means we've taken less bananas to eat in an hour to eat so try with more val
            else
            end=mid-1; // ans<h means we're taking leass hours than req. hours and it is possible when we consider eating more bananas so checking with less values 
        }
        return start;
    }
};