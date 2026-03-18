class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=weights[0],end=weights[0];
        for(int i=1;i<weights.size();i++){// calculating initial values of start and end
            if(weights[i]>start)  // start-> maximum value in array
            start=weights[i];    // end-> sum of all array values
            end+=weights[i];
        }
        while(start<=end){ 
            int mid=start+(end-start)/2; // selecting capacity as mid
            int daysReq=days_req(weights,mid);
            if(daysReq<=days) // if days in which we can find out sum is less or equal
            end=mid-1; // then checking for higher capacity as in less days we have shipped all parcels than the required days
            else        
            start=mid+1;  // if taking more days than given then we're increasing the capacity as with more capacity we can load more parcels
        }
        return start;
    }
    int days_req(vector<int>& weights, int caps){
        int day=1,load=0;   // initially at day 1 load value is 0 
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>caps){
                day++;  // incrementing days if load on ship is more than its capacity
                load=weights[i]; // setting load value for new day
            }
            else
            load+=weights[i]; //adding weights if weight added to load is lesser than the capacity of the ship
        }
        return day;
    }
};