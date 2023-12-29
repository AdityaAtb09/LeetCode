class Solution {
public:
    string capitalizeTitle(string s) {
        string temp = "", ans = "";
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                if(temp.length() < 3)
                {
                    for(int j=0; j<temp.length(); j++)
                    {
                        temp[j] = tolower(temp[j]);
                    }
                    
                    ans =ans+temp+' ';
                    temp.clear();
                }
                else
                {
                    temp[0] = toupper(temp[0]);
                    
                    for(int j=1; j<temp.length(); j++)
                    {
                        temp[j] = tolower(temp[j]);
                    }
                    
                    ans =ans+temp+' ';
                    temp.clear();
                }
            }
        }
        
        if(temp.length() < 3)
        {
            for(int j=0; j<temp.length(); j++)
            {
                temp[j] = tolower(temp[j]);
            }

            ans += temp;
        }
        else
        {
            temp[0] = toupper(temp[0]);

            for(int j=1; j<temp.length(); j++)
            {
                temp[j] = tolower(temp[j]);
            }

            ans += temp;
        }
        
        return ans;
    }
};