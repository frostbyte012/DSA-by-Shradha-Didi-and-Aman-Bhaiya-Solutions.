#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()==t.length())
        {
            
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            
            if(s==t)
            {
                return true;
            }
            
        }
        
        return false;
        
    }
};