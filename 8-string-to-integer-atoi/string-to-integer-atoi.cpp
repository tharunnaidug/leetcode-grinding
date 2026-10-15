class Solution {
public:
    int myAtoi(string s) {
        bool isNeg = false, isF = true, isP = true;
        long long ans = 0;


        for (char c : s) {
            if (c == ' ' && isP)
                continue;

            if (c == '-' && isF) {
                isNeg = true;
                isF = false;
                isP = false;
            }
            else if (c == '+' && isF) {
                isF = false;
                isP = false;
            }
            else if (isdigit(c)) {
                int digit = c - '0';

                if (ans > (long long)INT_MAX / 10 ||
                    (ans == (long long)INT_MAX / 10 &&
                     digit > (isNeg ? 8 : 7))) {
                    return isNeg ? INT_MIN : INT_MAX;
                }

                ans = ans * 10 + digit;
                isF = false;
                isP = false;
            }
            else {
                break;
            }
        }

        return isNeg ? -ans : ans;
    }
};