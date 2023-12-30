class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int i, j, flag = 0;
        vector<string> ans;
        unordered_map<char, char> m;

        for(i=0; i<words.size(); i++)
        {
            flag = 0;
            for(j=0; j<words[i].size(); j++)
            {
                for(auto it : m)
                {
                    if(it.first==pattern[j] && it.second!=words[i][j])
                    {
                        flag = 1;
                        break;
                    }
                    
                    if(it.second==words[i][j] && it.first!=pattern[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                
                if(flag == 1)
                {
                    break;
                }
                m[pattern[j]] = words[i][j];
            }
            
            if(flag == 0)
            {
                ans.push_back(words[i]);
            }
            m.clear();
        }
        
        return ans;
    }
};