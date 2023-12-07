//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

    bool isPalindrome(int n)
    {
        int num = n, rev = 0;
        
        while(n != 0)
        {
            int dig = n%10;
            rev = rev*10 + dig;
            n /= 10;
        }
        
        if(rev == num)
        {
            return 1;
        }
        
        return 0;
    }
    
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0; i<n; i++)
    	{
    	    if(!isPalindrome(a[i]))
    	    {
    	        return 0;
    	    }
    	}
    	
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends