class Solution {
public:
    int M=1e9+7;
    int dp[1001][1001];

    int numberOfSets(int n, int k) {

        for(int i=0; i<n; i++){
            dp[0][i]=1;
        }

        for(int j=1; j<=k; j++){
            vector<int> prevRS(n+1,0);

            for(int t=n-1; t>=0; t--){
                prevRS[t]=(prevRS[t+1]+dp[j-1][t]) %M;
            }

            for(int i=n-1; i>=0; i--){
                int take=prevRS[i+1];
                int skip=dp[j][i+1]%M;

                dp[j][i]=(take+skip)%M;
            }
        }
        
        return dp[k][0];
    }
};