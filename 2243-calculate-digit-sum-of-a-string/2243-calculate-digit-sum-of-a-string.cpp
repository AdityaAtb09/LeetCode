class Solution {
public:
    string digitSum(string s, int k) {
        vector<int> v;
        int n = 0;

        while(s.length() > k)
        {
            for(int i=0; i<s.length(); i++)
            {
                n = 0;
                
                for(int j=0; j<k; j++)
                {
                    if(i < s.length()) 
                    {
                        n = n+s[i]-'0';
                    }
                    i++;
                }
                i--;
                v.push_back(n);
            }
            s.clear();
            
            for(int p=0; p<v.size(); p++)
            {
                s = s+to_string(v[p]);
            }
            v.clear();
        }
        
        return s;
    }
};