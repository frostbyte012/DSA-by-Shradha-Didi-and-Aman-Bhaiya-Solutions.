//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
    public:
    bool match(string wild, string pattern)
    {
     
     int n=wild.length(),m=pattern.length();
     
     bool t[n+1][m+1];
     
     for(int i=n;i>=0;i--)
     {
         for(int j=m;j>=0;j--)
         {
             if(i==n && j==m)
             {
                 t[i][j]=true;
             }
             
             else if(i==n)
             {
                 t[i][j]=false;
             }
             
             else if(j==m)
             {
                 if(wild[i]=='*')
                 {
                     t[i][j]=t[i+1][j];
                 }
                 else
                 {
                     t[i][j]=false;
                 }
             }
             
             else if((wild[i]==pattern[j])||wild[i]=='?')
                {
                    t[i][j]=t[i+1][j+1];
                }
             
             else if(wild[i]=='*')
                {
                    t[i][j]=t[i+1][j]||t[i][j+1];
                }
                
            else
               t[i][j]=false;
               
        
         }
     }
     
     
     return t[0][0];
     
        // code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends