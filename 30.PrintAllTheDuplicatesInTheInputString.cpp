#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
  
  unordered_map<char,int> frequencies;

   for(int i=0;i<str.length();i++)
   {
       frequencies[str[i]]++;
   }

   
    for(auto&it : frequencies)
    {
        if(it.second>1)
        {
            cout<<it.first<<" count = "<<it.second<<endl;
        }
    }

  return 0;

}