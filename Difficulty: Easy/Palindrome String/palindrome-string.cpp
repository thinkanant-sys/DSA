class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int n=s.size(),flag=1;
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1])
            flag=0;
        }
        if(flag)
        return true;
        else
        return false;
    }
};