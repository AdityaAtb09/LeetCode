class Solution {
public:
    string reformatNumber(string s) {
        string temp = "";
        
        for(int i=0; i<s.length(); i++)
        {
           if(isdigit(s[i]))
           {
               temp += s[i];
           }
        }
        
        s.clear();
        int n = temp.length();
        
        while(n > 0)
        {
            if(temp.length()==4 || temp.length()==2)
            {
                s = s+temp.substr(0,2);
                temp.erase(0,2);
                n = n-2;
                
                if(n)
                {
                    s += '-';
                }
            }
            else
            {
                s = s+temp.substr(0,3);
                temp.erase(0,3);
                n = n-3;
                
                if(n)
                {
                    s += '-';
                }
            }
        }
        
        return s;
    }
};