#include<bits/stdc++.h>
using namespace std;
int maxElements(vector <int> & nums)
{
    int max=nums[0],i;
    for(i=0;i<nums.size();i++)
       if(max<nums[i])
          max=nums[i];
    return max; 
}
int minElements(vector <int> &nums)
{
    int min=nums[0],i;
    for(i=0;i<nums.size();i++)
        if(nums[i]<min)
           min=nums[i];
    return min;
}
int main()
{
    vector <int> nums;
    int inp;
    cout<<"Enter the numbers: "<<endl;
    while(cin>>inp)
    nums.push_back(inp);
    cout<<"The Min Element : "<<maxElements(nums)<<endl;
    cout<<"The Max Element : "<<minElements(nums)<<endl;
    return 1;
}