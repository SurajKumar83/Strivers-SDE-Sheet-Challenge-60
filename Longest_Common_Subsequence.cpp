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

//Tabulation Bottom Up Approach
int lcs(string s, string t)
{
	 int n=s.length(),m=t.length();
  vector<vector<int>>dp(n+1,vector<int>(m+1,0));

  for(int i=n-1;i>=0;i--){
	  for(int j=m-1;j>=0;j--){
		  if(s[i]==t[j]){
				dp[i][j]=1+dp[i+1][j+1];
          } 
		  else {
            dp[i][j] = max(dp[i][j + 1],dp[i + 1][j]);
          }
          }
  }
  return dp[0][0];
}
// space optimised using only cur and next vector;
#include <bits/stdc++.h> 

int lcs(string s, string t)
{
	 int n=s.length(),m=t.length();
  vector<int>cur(m+1,0),next(m+1,0);

  for(int i=n-1;i>=0;i--){
	  for(int j=m-1;j>=0;j--){
		  if(s[i]==t[j]){
				cur[j]=1+next[j+1];
          } 
		  else {
            cur[j] = max(cur[j + 1],next[j]);
          }
          }
		  next=cur;
  }
  return cur[0];
}
