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
// or 
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int N)
{
	long long int n=N;
	long long int s1=(n*(n+1))/2;
	long long int s2=(n*(n+1)*(2*n+1))/6;
	long long int s3=accumulate(arr.begin(),arr.end(),0);
	long long int s4=0;
	for(int i=0;i<n;i++){
		s4+=1ll*arr[i]*1ll*arr[i];
	}
	int ab=(s3-s1);
	int pab=(s4-s2);
	int a=(pab/ab +ab)/2;
	int b=a-ab;
	return {b,a};
}

