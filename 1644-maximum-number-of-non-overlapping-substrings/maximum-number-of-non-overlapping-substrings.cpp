class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n=s.size();

        vector<int> first(26,n),last(26,-1);
        vector<string>ans;

        for(int i=0; i<n; i++){
            int c=s[i]-'a';
            first[c]=min(first[c],i);
            last[c]=i;
        }

        vector<pair<int,int>> intervals;

        for(int i=0; i<26; i++){
            if(last[i]==-1) continue;

            int l=first[i],r=last[i];

            bool valid=true;

            for(int j=l; j<=r; j++){
                int x=s[j]-'a';

                if(first[x]<l){
                    valid=false;break;
                }

                r=max(r,last[x]);
            }

            if(valid)
                intervals.push_back({r,l});
        }

        sort(intervals.begin(),intervals.end());

        int prev=-1;

        for(auto [r,l]:intervals){
            if(l>prev){
                ans.push_back(s.substr(l,r-l+1));//its takes length not index
                prev=r;
            }
        }

        return ans;
    }
};