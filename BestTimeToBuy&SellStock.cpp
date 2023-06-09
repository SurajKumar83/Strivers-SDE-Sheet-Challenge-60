#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mx=INT_MIN,mn=INT_MAX;
    for(auto it:prices){
        mn=min(mn,it);
        mx=max(mx,it-mn);
    }
    return mx;
}
