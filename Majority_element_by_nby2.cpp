#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	vector<int>mp(200001,0);
	for(int i=0;i<n;i++){
		mp[arr[i]+100000]++;
		if(mp[arr[i]+100000]>n/2){
			return arr[i];
		}
		
	}
	return -1;
}
