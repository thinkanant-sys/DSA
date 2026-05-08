class Solution {
  public:
    int minFlips(string& s) {
        // code here
        int n=s.size(),count1=0,count2=0;
        char s1[n],s2[n];
        for(int i=0;i<n;i++){
            s1[i]='0';
            s1[++i]='1';
            }
            for(int i=0;i<n;i++){
            s2[i]='1';
            s2[++i]='0';
            }
        // for(int i=0;i<n;i++){
        //     cout<<s[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<s1[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<s2[i]<<" ";
        // }
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i])
            count1++;
            if(s[i]!=s2[i])
            count2++;
        }
        return min(count1,count2);
    }
};
