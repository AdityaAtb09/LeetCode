class Solution {
public:
    string greatestLetter(string s) {
        string loc = "", upc = "", ans;
        
        for(int i=0; i<s.length(); i++)
        {
            if(isupper(s[i]))
            {
                upc += s[i];
            }
            else
            {
                loc += s[i];
            }
        }
        
        sort(loc.begin(), loc.end(), greater<char>());
        sort(upc.begin(), upc.end(), greater<char>());
        
        for(int i=0; i<upc.length(); i++)
        {
            for(int j=0; j<loc.length(); j++)
            {
                if(tolower(upc[i]) == loc[j])
                {
                    ans = upc[i];
                    return ans;
                }
            }
        }
        
        return "";
    }
};