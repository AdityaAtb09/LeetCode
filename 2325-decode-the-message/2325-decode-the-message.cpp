class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> m;
        string ans = "";
        char c = 'a';
        
        for(auto ch : key)
        {
            if(ch!=' ' && m.find(ch)==m.end())
            {
                m[ch] = c++;
            }
        }
        
        for(char ch : message)
        {
            if(ch != ' ')
            {
                ans += m[ch];
            }
            else
            {
                ans += ' ';    
            }
        }
        
        return ans;
    }
};