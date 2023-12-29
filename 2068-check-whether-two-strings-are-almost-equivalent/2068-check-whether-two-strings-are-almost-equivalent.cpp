class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char, int> m;
        
        for(int i=0; i<word1.length(); i++)
        {
            m[word1[i]]++;
            m[word2[i]]--;
        }
        
        for(auto it : m)
        {
            if(it.second > 3 || it.second<-3)
            {
                return false;
            }
        }
        
        return true;
    }
};