class Solution {
public:
    int lengthOfLastWord(string s) {
        int prev=0,cur=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                if(cur==0) continue;

                prev=cur;
                cur=0;
            }
            else{
                cur++;
            }
        }

        if(cur==0)return prev;

        return cur;
    }
};