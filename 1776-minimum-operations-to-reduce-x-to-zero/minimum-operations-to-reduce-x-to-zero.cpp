class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int total = 0, n = nums.size();

        for (int a : nums) {
            total += a;
        }
        int target = total - x;
        if (target == 0) {
            return n;
        }

        int left = 0, sum = 0, maxL = -1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            while (sum > target && left <= i) {
                sum -= nums[left];
                left++;
            }

            if(sum==target){
                maxL=max(maxL,i-left+1);
            }
        }


        return maxL==-1?-1 :n-maxL;
    }
};