#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
   int left=0,right=m-1,top=0,bot=n-1;
   while(left<right && top<bot){
       int temp=mat[left][top];
    
       for(int i=left+1;i<=right;i++){
           int temp2=mat[top][i];
           mat[top][i]=temp;
           temp=temp2;
       }
       top++;
       for(int i=top;i<=bot;i++){
           int temp2=mat[i][right];
           mat[i][right]=temp;
           temp=temp2;
       }
       right--;
       for(int i=right;i>=left;i--){
           int temp2=mat[bot][i];
           mat[bot][i]=temp;
           temp=temp2;
       }
       bot--;
       for(int i=bot;i>=top;i--){
           int temp2=mat[i][left];
           mat[i][left]=temp;
           temp=temp2;
       }
       left++;
       mat[left-1][top-1]=temp;
   }

}
