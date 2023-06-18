#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
      double ans=0;
      sort(items.begin(),items.end(),[&](pair<int,int> a,pair<int,int> b){
           return (1.0*a.second/a.first)>(1.0*b.second/b.first);
      });
      for(int i=0;i<n;i++){
          if(items[i].first<=w){
              ans+=items[i].second;
              w-=items[i].first;
          }
          else {
              ans+=w/(1.0*items[i].first) *items[i].second;
              break;
          }
      }
      return ans;
}
