class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
//         int count[26]={0};
//         int n=s.size();
//         for(int i=0;i<n;i++){
//             int index=s[i]-'a';
//             count[index]++;
//         }
//         int max=0,index=0;
//         for(int i=0;i<26;i++){
//             if(count[i]>max){
//             max=count[i];
//             index=i;
//   -          }
//         }
//         char ch='a'+index;
//         cout<<ch<<endl;
//         return ch;
 int count[26]={0};
 int n=s.size();
 for(int i=0;i<n;i++){
     int index=s[i]-'a';
     count[index]++;
 }
 int index=-1;
 int max=INT_MIN;
 for(int i=0;i<26;i++){
     if(count[i]>max){
         max=count[i];
         index=i;
     }
 }
 char ch='a'+index;
 return ch;
    }
};