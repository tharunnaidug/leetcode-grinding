class Solution {
public:
    int minRotations(string s) {
        int ans=0;

        ans+=min(abs(0-(s[0]-'0')),10-abs(0-(s[0]-'0'))); // for 0th index
        for(int i=1; i<10; i++){
            ans+=min(abs((s[i-1]-'0')-(s[i]-'0')),10-abs((s[i-1]-'0')-(s[i]-'0')));
        }

        return ans;
    }
};