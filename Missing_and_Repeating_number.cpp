#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int a,b;
	unordered_map<int,int>mp;

	for(int i=0;i<n;i++){
		if(mp[arr[i]]){
			a=arr[i];
		}
		mp[arr[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(mp[i]==0){
			b=i;
			break;
		}
	}
	return {b,a};
}
