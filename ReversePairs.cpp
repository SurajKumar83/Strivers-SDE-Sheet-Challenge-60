#include <bits/stdc++.h> 
void f(vector<int>&arr,int l,int mid,int h,int& ans){
	vector<int>cur;
	int i=l,j=mid+1,c=0;
	int p=j;
	while(i<=mid){
		while(p<=h && arr[i]>(long long)arr[p]*2)
		{
			p++;
			c++;
		}
		ans+=c;
		i++;
	}
	i=l;
	while(i<=mid && j<=h){
       if(arr[i]<=arr[j]){
		   cur.push_back(arr[i++]);
	   }
	   else {
		   cur.push_back(arr[j++]);
	   }
	}
	while(i<=mid)
		cur.push_back(arr[i++]);
    
	while(j<=h){
		cur.push_back(arr[j++]);
	}
	for(int q=l;q<=h;q++){
		arr[q]=cur[q-l];
	}
}
void mergersort(vector<int>&arr,int l,int h,int &ans){
	if(l<h){
		int  mid=l+(h-l)/2;
		mergersort(arr,l,mid,ans);
		mergersort(arr,mid+1,h,ans);
		f(arr,l,mid,h,ans);
	}
}
int reversePairs(vector<int> &arr, int n){
		int ans=0;
		mergersort(arr,0,n-1,ans);
		return ans;
}
