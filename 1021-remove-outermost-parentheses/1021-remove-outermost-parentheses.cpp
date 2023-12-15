class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt = 0;
        
        for(auto ch : s)
        {
            if(ch=='(' && cnt++ > 0)
            {
                ans += ch;
            }
            if(ch==')' && cnt-- > 1)
            {
                ans += ch;
            }
        }
        
        return ans;
    }
};