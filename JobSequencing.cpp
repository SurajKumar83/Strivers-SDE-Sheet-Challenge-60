#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{
    int n=jobs.size();
    sort(jobs.begin(),jobs.end(),[](vector<int>a,vector<int>b){
        return a[1]>b[1];
    });
    int maxdeadline=0;
    for(int i=0;i<n;i++){
        maxdeadline=max(maxdeadline,jobs[i][0]);
    }
    vector<int>deadline(maxdeadline+1,0);
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
       int d=jobs[i][0];

       while(d>0){
           if(deadline[d]==0){
               
               deadline[d]=1;
               ans+=jobs[i][1];
               break;
           }
           d--;
       }
    }
    return ans;
}
