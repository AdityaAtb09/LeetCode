class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> s;
        
        for(auto str : emails)
        {
            string temp;
            
            for(char c : str) 
            {
                if(c=='+' || c=='@') 
                {
                    break;
                }
                
                if(c=='.')
                {
                    continue;
                }
                
                temp += c;
            }
            
            temp += str.substr(str.find('@'));
            s.insert(temp);
        }
        
        return s.size();
    }
};