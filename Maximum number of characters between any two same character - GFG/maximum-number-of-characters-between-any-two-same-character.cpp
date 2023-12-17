//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxChars (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << maxChars (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int maxChars (string s)
{
    // your code here
    unordered_map<int, int> m;
    int ans = -1;
    
    for(int i=0; i<s.length(); i++)
    {
        if(m.find(s[i]) != m.end())
        {
            ans = max(ans, i-m[s[i]]-1);
        }
        else
        {
            m[s[i]] = i;
        }
    }
    
    return ans;
}