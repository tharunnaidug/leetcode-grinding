class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n=a.size(),m=b.size(),cnt=1;

        string ans=a;

        while(ans.size()<b.size()){
            ans+=a;
            cnt++;
        }

        if(ans.find(b)!=string::npos) return cnt;

        ans+=a;
        cnt++;

        if(ans.find(b)!=string::npos) return cnt;

        return -1;
    }
};