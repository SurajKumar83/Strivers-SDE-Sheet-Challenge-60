#include <iostream>

void setZeros(vector<vector<int>> &matrix)
{
	vector<pair<int,int>>vp;
	int n=matrix.size(),m=matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++ ){
			if(matrix[i][j]==0){
				vp.push_back({i,j});
			}
		}
	}
	for(auto it:vp){
		int x=it.first;
		int y=it.second;
		//row
		for(int p=0;p<m;p++){
			matrix[x][p]=0;
		}
		// col
		for(int p=0;p<n;p++){
			matrix[p][y]=0;
		}
	}
}