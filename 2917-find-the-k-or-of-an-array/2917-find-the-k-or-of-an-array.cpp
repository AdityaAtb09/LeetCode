class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int> v(32, 0);
        int ans = 0;
        
        for(const int& num : nums)
        {
            for(int i=0; i<32; i++)
            {
                if(((1 << i) & num) == 0)
                {
                    continue;
                }
                
                if((++v[i]) == k)
                {
                    ans |= (1 << i);
                }
            }
        }
        
        return ans;
    }
};