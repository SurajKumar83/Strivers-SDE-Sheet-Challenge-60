#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long sum=INT_MIN,cur=0;
    
    for(int i=0;i<n;i++){
        cur+=arr[i];
        
        if(sum<cur){
            sum=cur;
        }
        if(cur<0){
            cur=0;
        }
    }
    return sum>0?sum:0;
}
