#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int ans=0;
    int n=input.length();
    vector<int>v(26,-1);
    int i=0,j=0;
    while(j<n){
       while(j<n && v[input[j]-'a']==-1){
          v[input[j]-'a']=j;
          j++;
       }
       ans=max(ans,j-i);
       if(j<n){
          for(int p=i;p<v[input[j]-'a'];p++){
             v[input[p]-'a']=-1;
          }
          i=v[input[j]-'a']+1;
          v[input[j]-'a']=-1;
       }
    }
   
    return ans;
}
