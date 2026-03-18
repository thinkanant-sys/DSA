class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=weights[0],end=weights[0];
        for(int i=1;i<weights.size();i++){
            if(weights[i]>start)
            start=weights[i];
            end+=weights[i];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            int daysReq=days_req(weights,mid);
            if(daysReq<=days)
            end=mid-1;
            else
            start=mid+1;
        }
        return start;
    }
    int days_req(vector<int>& weights, int caps){
        int day=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>caps){
                day++;
                load=weights[i];
            }
            else
            load+=weights[i];
        }
        return day;
    }
};