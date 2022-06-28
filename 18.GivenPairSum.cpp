#include<bits/stdc++.h>
using namespace std;

class Solution{

 public:
       bool pairInSortedRotatedArray(vector<int> & nums,int target)
       {

          int n=nums.size(),j;

          for(int i=0;i<n;i++)
          {
             if(nums[i]>nums[i+1])
             {
                j=i;
                break;
             }
          }

          int l=(j+1)%n;
          int r=j;

          while(l!=r)
          {
            if(nums[l]+nums[r]==target)
            {
                return true;
            }
            else if(nums[l]+nums[r]<target)
            {
                 l=(l+1)%n;
            }
            else{
                r=(n+r-1)%n;
            }
          }
          
          return false;

       }

};

int main()
{
    int target,num;
    vector<int> nums;
    cout<<"Enter the target"<<endl;
    cin>>target;
    cout<<"Enter the elements"<<endl;
    while(cin>>num)
    {
        nums.push_back(num);
    }
    Solution solution;
    cout<<solution.pairInSortedRotatedArray(nums,target)<<endl;
    return 1;
}