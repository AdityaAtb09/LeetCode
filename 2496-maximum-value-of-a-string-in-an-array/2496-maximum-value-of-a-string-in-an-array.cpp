class Solution {
public:
    
    bool isString(string str)
    {
        for(auto ch : str)
        {
            if(!isdigit(ch))
            {
                return true;
            }
        }
        
        return false;
    }
    
    int maximumValue(vector<string>& s) {
        vector<int> ans;
        
        for(auto it : s)
        {
            if(isString(it))
            {
                ans.push_back(it.length());
            }
            else
            {
                ans.push_back(stoi(it));
            }
        }
        
        return *max_element(ans.begin(), ans.end());
    }
};