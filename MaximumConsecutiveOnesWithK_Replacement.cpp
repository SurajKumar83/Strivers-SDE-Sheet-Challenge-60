int longestSubSeg(vector<int> &arr , int n, int k){
    int ans=0;
    int i=0,j=0;
    vector<int>mp(2,0);
    
    while(j<n){
        
        while(j<n && mp[0]<=k){
            mp[arr[j]]++;
            j++;
            if(mp[0]>k){
                break;
            }
            ans=max(ans,mp[0]+mp[1]);
        }
        while(i<j && mp[0]>k){
            mp[arr[i]]--;
            i++;
        }
    }
    return ans;
}
