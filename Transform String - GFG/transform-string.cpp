//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.size() != B.size())
        {
            return -1;
        }
        
        int n = A.size();
        vector<int> freq(256,0);
        
        for(int i=0; i<n; i++)
        {
            freq[A[i]]++;
            freq[B[i]]--;
        }
        
        for(int i=0; i<256; i++)
        {
            if(freq[i] != 0)
            {
                return -1;
            }
        }
        
        int cnt = 0;
        int i = A.size()-1, j = B.size()-1;
        
        while(i >= 0)
        {
            if(A[i] != B[j])
            {
                cnt++;
                i--;
            }
            else
            {
                i--;
                j--;
            }
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends