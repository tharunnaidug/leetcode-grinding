class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string res="",f=strs[0],l=strs[n-1];
        int x=min(f.length(),l.length());

        for(int i=0; i<x; i++){
            if(f[i]==l[i]){
                res+=f[i];
            }
            else{
                break;
            }
        }

        return res;
    }
};