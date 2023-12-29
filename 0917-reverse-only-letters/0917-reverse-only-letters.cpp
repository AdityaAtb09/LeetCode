class Solution {
public:
    string reverseOnlyLetters(string s) {
        string temp = "";
        
        for(auto ch : s)
        {
            if(isalpha(ch))
            {
                temp += ch;
            }
        }
        
        reverse(temp.begin(), temp.end());
        int j = 0;
        
        for(int i=0; i<s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                s[i] = temp[j++];
            }
        }
        
        return s;
    }
};