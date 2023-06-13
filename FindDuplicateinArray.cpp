#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	unordered_map<int,int>mp;
	for(auto it:arr){
		if(mp[it]){
			return it;
		}
		mp[it]++;
	}
	return -1;
}
