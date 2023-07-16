#include <bits/stdc++.h> 
int f(int i,int j,string &str1,string& str2,vector<vector<int>>&dp){
   if(i==str1.length() || j==str2.length()){
      return 0;
   }
   if(dp[i][j]!=-1)return dp[i][j];
   if(str1[i]==str2[j]){
     return dp[i][j]=1+f(i+1,j+1,str1,str2,dp);
   }
   return dp[i][j]=max(f(i,j+1,str1,str2,dp),f(i+1,j,str1,str2,dp));
}

int lcs(string s, string t)
{
	 int n=s.length(),m=t.length();
  vector<vector<int>>dp(n,vector<int>(m,-1));
  return f(0,0,s,t,dp);
}
