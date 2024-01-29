class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        vector<int> v(51,0);
        int x = 0;
        for(int i = 0; i < A.size(); i++){
            if(v[A[i]]<0)
                x++;
            v[A[i]]++;
            if(v[B[i]]>0)
                x++;
            v[B[i]]--;
            ans.push_back(x);
        }
        return ans;
    }
};