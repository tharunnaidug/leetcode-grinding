class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cur=0,ans=0,n=nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]==1){
                cur++;
                ans=max(cur,ans);
            }
            else{
                cur=0;
            }
        }

        return ans;
    }
};