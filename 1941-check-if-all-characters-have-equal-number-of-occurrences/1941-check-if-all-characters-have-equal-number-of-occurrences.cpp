class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        
        for(auto ch : s)
        {
            m[ch]++;
        }
        
        int n = m[s[0]];
        
        for(auto it : m)
        {
            if(it.second != n)
            {
                return false;
            }
        }
        
        return true;
    }
};