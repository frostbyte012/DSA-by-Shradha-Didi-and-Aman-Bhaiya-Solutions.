#include<bits/stdc++.h>
using namespace std;

// vector<int> Solution::repeatedNumber(const vector<int> &A) {
//copy the above line while executing

vector<int> repeatedNumber(const vector<int> &A) {
   
int n=A.size();
long int OneToN=long(n*long(n+1))/2;
long int OneToN2=long(n*long(n+1)*long(2*n+1))/6;
long int actual_sum=0;
long int actual_square_sum=0;

for(int i=0;i<n;i++)
{
    actual_sum+=A[i];
    actual_square_sum+=long(A[i])*long(A[i]);
}

long int x_minus_y = OneToN-actual_sum;
long int x2_minus_y2 = OneToN2-actual_square_sum;
long int x_plus_y = x2_minus_y2/x_minus_y;
long int x = long(x_plus_y + x_minus_y)/2;
long int y = long(x_plus_y - x_minus_y)/2;
    
    
return {y,x};
    
}
