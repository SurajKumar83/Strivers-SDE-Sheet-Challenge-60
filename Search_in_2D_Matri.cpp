bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size(),m=mat[0].size();
        int l=0,h=m-1;
        while(l<n && h>=0){
            if(mat[l][h]==target)return 1;
            else if(mat[l][h]>target){
                h--;
            }
            else{
                l++;
            }
        }
        return 0;
}
