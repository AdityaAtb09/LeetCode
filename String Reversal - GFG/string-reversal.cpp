//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    string ans = "";
    reverse(s.begin(), s.end());
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            continue;
        }
        else
        {
            if(ans.find(s[i]) == string::npos)
            {
                ans += s[i];
            }
        }
    }
    
    return ans;
}