class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        vector<string> ans;
        string temp = "";
        
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i] != ' ')
            {
                temp += s1[i];
            }
            else
            {
                m[temp]++;
                temp.clear();
            }
        }
        m[temp]++;
        temp.clear();
        
        for(int i=0; i<s2.length(); i++)
        {
            if(s2[i] != ' ')
            {
                temp += s2[i];
            }
            else
            {
                m[temp]++;
                temp.clear();
            }
        }
        m[temp]++;
        
        for(auto it : m)
        {
            if(it.second == 1)
            {
                ans.push_back(it.first);
            }
        }
        
        return ans;
    }
};