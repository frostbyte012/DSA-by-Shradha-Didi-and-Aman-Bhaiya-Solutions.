#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : "<<endl;
    getline(cin,str);
    
    unordered_map<char,int> NumericKeypad;

    NumericKeypad.insert({'A',2});
    NumericKeypad.insert({'B',22});
    NumericKeypad.insert({'C',222});
    NumericKeypad.insert({'D',3});
    NumericKeypad.insert({'E',33});
    NumericKeypad.insert({'F',333});
    NumericKeypad.insert({'G',4});
    NumericKeypad.insert({'H',44});
    NumericKeypad.insert({'I',444});
    NumericKeypad.insert({'J',5});
    NumericKeypad.insert({'K',55});
    NumericKeypad.insert({'L',555});
    NumericKeypad.insert({'M',6});
    NumericKeypad.insert({'N',66});
    NumericKeypad.insert({'O',666});
    NumericKeypad.insert({'P',7});
    NumericKeypad.insert({'Q',77});
    NumericKeypad.insert({'R',777});
    NumericKeypad.insert({'S',7777});
    NumericKeypad.insert({'T',8});
    NumericKeypad.insert({'U',88});
    NumericKeypad.insert({'V',888});
    NumericKeypad.insert({'W',9});
    NumericKeypad.insert({'X',99});
    NumericKeypad.insert({'Y',999});
    NumericKeypad.insert({'Z',9999});
    NumericKeypad.insert({' ',0});

    for(int i=0;i<str.length();i++)
    {
        cout<<NumericKeypad[toupper(str[i])];        
    }
 
  return 0;

}