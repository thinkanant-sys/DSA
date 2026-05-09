// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        // code here
        int n=s.size(),skip=0;
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                skip=s[i]-'A';
                s[i]='a'+skip;
            }
        }
        return s;
    }
};