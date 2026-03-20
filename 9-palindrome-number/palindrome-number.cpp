class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long rev=0;
        while(y>0){
            int rem=y%10;
            rev=rev*10+rem;
            y=y/10;
        }
        if(rev==x)
        return true;
        else
        return false;
    }
};