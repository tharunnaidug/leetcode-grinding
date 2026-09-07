class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allCap=true,allSmall=true,oneCap=false,nSmall=true;

        for(int i=0; i<word.length(); i++){
            if(i==0){
                if(isupper(word[i])){
                    oneCap=true;
                }
                else{
                    allCap=false;
                    allSmall=true;
                }
                continue;
            }

            if(isupper(word[i])){
                allSmall=false;
                nSmall=false;
            }
            if(islower(word[i])){
                allCap=false;
            }
        }

        if(allCap || allSmall || (oneCap && nSmall)){
            return true;
        }

        return false;
    }
};