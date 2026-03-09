// User function Template for C++

class Solution {
  public:
    int makeProductOne(int arr[], int N) {
        // code here
        
        // +ve no -> steps= n-1 e.g. 5 then to make it 1 5-1= 4 steps 5->4->3->2->1
        // if -ve no's are even then no issue just do steps= -(n+1) e.g -(-5+1)= 4 steps
        // if -ne no's are odd the 2 cases arose
        // if 0 exists then we can make that 0 to -1 i.e. 1 step and -1*-1 =+1
        // if 0 does not exists then make that -1 to 0 then to +1 i.e 2 steps required
        int steps=0,count_zero=0,sign=0;
        for(int i=0;i<N;i++){
            if(arr[i]>0)
            steps+=(arr[i]-1);
            else if(arr[i]==0){
            steps++;
            count_zero++;
            }
            else{
                steps=steps-(arr[i]+1);
                sign++;
            }
        }
        if(sign%2!=0 && count_zero==0)
        return (steps+2);
        else
        return steps;
    }
};