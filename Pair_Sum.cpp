#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;
   int n=arr.size();
   for(int i=0;i<n;i++){
      int tofind=s-arr[i];
      for(int j=i+1;j<n;j++){
          if(tofind==arr[j]){
             if(arr[i]<=arr[j]){
               ans.push_back({arr[i],arr[j]});
             }else{
                ans.push_back({arr[j],arr[i]});
             }
             
          }
      }
   }
   sort(ans.begin(),ans.end());
   return ans;
}
// 2nd method
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>>ans;
   int n=arr.size();
   map<int,vector<int>>mp;
   for(int i=0;i<n;i++){
      mp[arr[i]].push_back(i);
   }

   for(int i=0;i<n;i++){
      int tofind=s-arr[i];
      if(mp.find(tofind)!=mp.end()){
         for(auto it:mp[tofind]){
            if(it>i){
               if(arr[i]<=tofind){
                 ans.push_back({arr[i],tofind});
               }else{
               ans.push_back({tofind,arr[i]});
              }
            }
         }
         
      }
   }
    sort(ans.begin(),ans.end());
   return ans;
}

