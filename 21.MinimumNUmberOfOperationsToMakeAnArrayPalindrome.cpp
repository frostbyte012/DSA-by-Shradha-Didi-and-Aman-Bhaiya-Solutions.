#include<bits/stdc++.h>
using namespace std;

int operations(vector<int> &arr,int n)
{
    int l=0,r=n-1,count=0;
    while(l<=r)
    {
        if(arr[l]==arr[r])
        {
            l++;
            r--;
        }
        else if(arr[l]<arr[r])
        {
            l++;
            arr[l]+=arr[l-1];
            count++;
        }
        else{
            r--;
            arr[r]+=arr[r+1];
            count++;
        }
    }

    return count;
}

int main()
{
    // vector<int> arr={15, 4, 15};
    // vector<int> arr= {1, 4, 5, 1};
    vector<int>arr={11, 14, 15, 99};
    cout<<operations(arr,4);
    return 1;
}