#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long curr=arr[0];
    long long mxm=arr[0];
    for(long long i=1;i<n;i++)
    {
        curr=curr+arr[i]>arr[i]?curr+arr[i]:arr[i];
        mxm=max(curr,mxm);
    }
   return mxm>0?mxm:0;
}
