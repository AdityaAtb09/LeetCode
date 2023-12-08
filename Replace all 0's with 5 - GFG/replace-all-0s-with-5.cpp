//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    
    int num = 0, sum = 1;
    
    while(n != 0)
    {
        int dig = n%10;
        
        if(dig == 0)
        {
            dig = 5;
        }
        
        num = num + dig*sum;
        sum = sum*10;
        n /= 10;
    }
    
    return num;
}