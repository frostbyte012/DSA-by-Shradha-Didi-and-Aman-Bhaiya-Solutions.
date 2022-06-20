#include<bits/stdc++.h>
using namespace std;
int sortedArray(int arr[],int key,int left,int right)
{


    if(left > right)
    {
        return -1;

    }
   

   int mid=(left+right)/2;

   if(arr[mid]==key)
   {
    return mid;
   }

   if(arr[left]<=arr[mid])
   {
     if(key>=arr[left] && key <= arr[mid])
     {
        return sortedArray(arr,key,left,mid-1);
     }
       return sortedArray(arr,key,mid+1,right);
   }


  if(key>=arr[mid] && key<=arr[right])
  {
    return sortedArray(arr,key,mid+1,right);
  }

  return sortedArray(arr,key,left,mid-1);

}

int main()
{

    int arr[]={6,7,8,9,10,1,2,5};
    int key=8;
    int n=8;
    int k=sortedArray(arr,key,0,n-1);
    if(k==-1)
    {
        cout<<"THe element is not found"<<endl;
    }
    else{
        cout<<"The element is found at index : "<<k<<endl;
    }
    return 1;
}