class Solution {
  public:
    string merge(string s1, string s2) {
        // code here
        string s3="";
        int n1=s1.size(),n2=s2.size(),i=0;
        while(i<n1 && i<n2){
            s3+=s1[i];
            s3+=s2[i];
            i++;
        }
        while(i<n1){
        s3+=s1[i];
        i++;
        }
        while(i<n2){
        s3+=s2[i];
        i++;
        }
        return s3;
    }
};