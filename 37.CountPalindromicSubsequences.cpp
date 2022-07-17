//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete below method */
    long long mod=1e9+7;
    long long int  countPS(string str)
    {
       //Your code here
       
       int n=str.length();
       vector<vector<long long>> dp(n,vector<long long>(n,0));
       
       for(int l=1;l<=n;l++)
       {
           for(int i=0;i+l<=n;++i)
           {
               int j=i+l-1;
               if(l==1)
               {
                   dp[i][i]=1;
                   
               }
               else if(l==2)
               {
                   if(str[i]==str[j])
                   {
                       dp[i][j]=3;
                   }
                   else
                   {
                     dp[i][j]=2;   
                   }
                   
               }
               
               else if(str[i]==str[j])
               {
                   dp[i][j]=dp[i][j-1]+dp[i+1][j]+1;
                   
               }
               
               else
               {
                   dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
               }
               
               dp[i][j]+=mod;
               dp[i][j]%=mod;
               
           }
       }
       
       
       return dp[0][n-1];
       
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends