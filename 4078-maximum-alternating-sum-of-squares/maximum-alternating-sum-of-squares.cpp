class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        
        int n=nums.size();
        long long ans=0;

        for(int i=0; i<n; i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++){
            if(i>n/2-1){
                ans+=(long long)nums[i]*nums[i];
            }
            else{
                ans-=(long long)nums[i]*nums[i];
            }
        }

        return ans;
    }
};