//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
        string reverseWithSpacesIntact (string str)
        {
            //code here.
            string ans = str;
            int s = 0, e = str.length()-1;
            
            while(s < e)
            {
                if(ans[s] == ' ')
                {
                    s++;
                    continue;
                }
                
                if(ans[e] == ' ') 
                {
                    e--;
                    continue;
                }
                swap(ans[s++], ans[e--]);
            }
            
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends