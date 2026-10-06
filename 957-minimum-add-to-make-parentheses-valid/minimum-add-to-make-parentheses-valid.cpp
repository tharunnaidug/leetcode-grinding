class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,bal=0;

        for(char x:s){
            if(x=='(') bal++;
            else{
                bal--;
                if(bal<0){
                    ans++;
                    bal=0;
                }
            }
        }

        return ans+bal;

    
    }
};