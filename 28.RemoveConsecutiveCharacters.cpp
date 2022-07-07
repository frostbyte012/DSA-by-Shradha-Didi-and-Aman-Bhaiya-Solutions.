// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int c=0;
        string s="";
        
        for(int i=0;i<S.length();i++)
        
        {
            
            
            if(i<S.length()-1 && S[i]==S[i+1])
            {
                continue;
            }

        

    
            s+=S[i];
                
    
           
        }
        

        return s;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends