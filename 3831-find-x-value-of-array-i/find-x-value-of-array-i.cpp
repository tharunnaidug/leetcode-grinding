class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<long long> res(k,0),prevCnt(k,0);

        for(int i=0; i<n; i++){

            vector<long long> curCnt(k,0);

            int curRem=nums[i]%k;
            curCnt[curRem]++;

            for(int j=0; j<k; j++){
                int temp=((long long)j*nums[i]%k)%k;

                curCnt[temp]+=prevCnt[j];
            }

            prevCnt=std::move(curCnt);

            for(int x=0; x<k; x++){
                res[x]+=prevCnt[x];
            }
        }

        return res;
    }
};