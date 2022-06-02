#include<bits/stdc++.h>
using namespace std;

int candiesDistribution(vector <int> &candies, int n,int m)
{
    
    int minDiff=INT_MAX;
    if(m==0||n==0)
    return 0;
    if(n<m)
    return -1;
    sort(candies.begin(),candies.end());
    for(int i=0;i+m-1<n;i++)
    {
        if((candies[i+m-1]-candies[i])<minDiff)
           minDiff=candies[i+m-1]-candies[i];
    }

    return minDiff;

}

int main()
{
    int inp,m;
    vector <int> candies;
    cout<<"Enter the number of children :"<<endl;
    cin>>m;
    cout<<"Enter the numbers of candies :"<<endl;
    while(cin>>inp)
    candies.push_back(inp);
    cout<<candiesDistribution(candies,candies.size(),m)<<endl;
    return 1;
}