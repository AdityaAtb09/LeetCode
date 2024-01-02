class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int res = 1;
        unordered_set<int> s;
        
        for(auto a : rolls)
        {
            s.insert(a);
            
            if (s.size() == k)
            {
                res++;
                s.clear();
            }
        }
        
        return res;
    }
};