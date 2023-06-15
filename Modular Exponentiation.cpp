#include <bits/stdc++.h>
int p(int x,int n,int m){
	if(n==0){
		return 1;
	}
	if(n==1){
		return x;
	}
	if(n%2==0){
		long long temp=p(x,n/2,m)%m;
		return (temp*temp)%m;
	}
	long long temp=p(x,n/2,m)%m;
	return ((temp*temp)%m*x)%m;
}
int modularExponentiation(int x, int n, int m) {
	return p(x,n,m)%m;
}
