class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int count =0;

        for(int i=0;i<m;i++){
            vector<int> cumuColSum(n,0);

            for(int j=i;j<m;j++){
                unordered_map<int,int> freq;
                int sum = 0;
                for(int k=0;k<n;k++){
                    cumuColSum[k] = matrix[k][j] + cumuColSum[k];
                    freq[sum]++;
                    sum += cumuColSum[k];
                    count += freq[sum-target];
                    
                }
            }
        }

        return count;
    }
};