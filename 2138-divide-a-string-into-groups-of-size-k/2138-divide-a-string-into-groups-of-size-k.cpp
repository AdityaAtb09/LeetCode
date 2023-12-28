class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        string temp = "";
        
        for(int i=0; i<s.length(); i++)
        {
            temp.push_back(s[i]);
            
            if(temp.length() == k)
            {
                ans.push_back(temp);
                temp.clear();
            }
        }
        
        if(temp.length() == 0)
        {
            return ans;
        }
        
        while(temp.length() != k)
        {
            temp.push_back(fill);
        }
        ans.push_back(temp);
        
        return ans;
    }
};