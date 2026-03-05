class Solution {
public://easy秒了
    bool secial(vector<vector<int>>& mat,int x,int y,int n,int m){
        for(int i=0;i<m;i++){
            if(i==y) continue;
            if(mat[x][i]==1) return false;
        }
        for(int i=0;i<n;i++){
            if(i==x) continue;
            if(mat[i][y]==1) return false;
        }
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat[0].size(),n=mat.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    if(secial(mat,i,j,n,m)){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
