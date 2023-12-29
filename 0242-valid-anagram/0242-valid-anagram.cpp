class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
        {
            return false;
        }
        
        unordered_map<char, int> m1, m2;
        
        for(auto ch : s)
        {
            m1[ch]++;
        }
        
        for(auto ch : t)
        {
            m2[ch]++;
        }
        
        return m1==m2;
    }
};