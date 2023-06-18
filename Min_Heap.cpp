#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<int>ans;
    for(auto it:q){
        if(it[0]==0){
            pq.push(it[1]);
        }
        else{
            if(!pq.empty()){
                ans.push_back(pq.top());
                pq.pop();
            }
        }
    }
    return ans;
}
