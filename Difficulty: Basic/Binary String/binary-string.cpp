class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        // int n=s.size(),count=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='1'){
        //         for(int j=i+1;j<n;j++){
        //             if(s[j]=='1')
        //             count++;
        //         }
        //     }
        // }
        // //cout<<count<<endl;
        // return count;
        int n=s.size(),count=0;
         for(int i=0;i<n;i++){
             if(s[i]=='1'){
              count++;   
             }
         }
             int ans=count*(count-1)/2;
             return ans;
    }
};