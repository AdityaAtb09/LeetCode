class Solution {
public:
    char findKthBit(int n, int k) {
        unordered_map<int, string> m;
        m[1]="0";
        
        for(int i=2; i<=n; i++)
        {
            int j = m[i-1].length()-1;
            string s1="";
            
            while(j >= 0)
            {
                if(m[i-1][j--] == '0')
                {
                    s1+='1';
                }
                else 
                {
                    s1+='0';
                }
            }
            
            m[i] += m[i-1]+"1"+s1;
        }
        
        string ans = m[n];
        return ans[k-1];
    }
};