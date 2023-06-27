#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  
   int sum=0;
   int n=arr.size();
   unordered_map<int,int>mp;
   int ans=0;
   int i=0;
   while(i<n)
   {
     sum+=arr[i];
     if(sum==0){
        ans=i+1;
     }
     if(mp.find(sum)!=mp.end())
     {
       ans=max(ans,(i-mp[sum]));
     }
     else{
       mp[sum]=i;
     }
     i++;
   }
   return ans;

}
