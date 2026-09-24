class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]<9){

                if(i==nums[i]){
                    return i;
                }
            }
            else{
                int cur=0,temp=nums[i];
                while(temp>0){
                    cur+=temp%10;
                    temp/=10;
                }

                if(cur==i) return i;
            }
        }

        return -1;
    }
};