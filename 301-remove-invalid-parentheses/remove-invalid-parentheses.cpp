class Solution {
public:
    int n, maxL;
    unordered_set<string> st;

    void slove(string& s, int i, string &cur, int cnt) {
        if (cnt < 0)
            return;

        if (i == n) {
            if (cnt == 0) {
                if (cur.length() > maxL) {
                    maxL = cur.length();
                    st.clear();
                }

                if (cur.length() == maxL) {
                    st.insert(cur);
                }
            }
            return;
        }
        if (s[i] != ')' && s[i] != '(') {
            cur.push_back(s[i]);
            slove(s, i + 1, cur, cnt);
            cur.pop_back();
            return;
        }

        cur.push_back(s[i]);
        slove(s, i + 1, cur, cnt + (s[i] == '(' ? 1 : -1));
        cur.pop_back();

        slove(s, i + 1, cur, cnt);
    }

    vector<string> removeInvalidParentheses(string s) {
        n = s.length();
        st.clear();

        maxL = 0;
        string cur = "";
        slove(s, 0, cur, 0);

        return vector<string>(begin(st), end(st));
    }
};