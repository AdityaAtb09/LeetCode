class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int Lcnt = 0, Rcnt = 0, ans = 0;
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'L')
            {
                Lcnt++;
            }
            else
            {
                Rcnt++;
            }
            
            if(Lcnt == Rcnt)
            {
                ans++;
            }
        }
        
        return ans;
    }
};