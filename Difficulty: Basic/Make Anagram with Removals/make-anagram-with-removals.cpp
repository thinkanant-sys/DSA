class Solution {
  public:
    int remAnagram(string &s1, string &s2) {
        // code here
        int n1=s1.size(),n2=s2.size();
        int count1[26]={0},count2[26]={0};
        for(int i=0;i<n1;i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        for(int i=0;i<n2;i++){
            int index=s2[i]-'a';
            count2[index]++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            count+=abs(count1[i]-count2[i]);
        }
        return count;
    }
};
