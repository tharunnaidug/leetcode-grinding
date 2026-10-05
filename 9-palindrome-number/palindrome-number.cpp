class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,n=x;

        while(n>0){
            rev=(rev*10)+n%10;
            n/=10;
        }

        return rev==x;
    }
};