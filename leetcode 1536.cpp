class betterSolution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> pos(n, -1);
        for (int i = 0; i < n; ++i) {
            for (int j = n - 1; j >= 0; --j) {
                if (grid[i][j] == 1) {
                    pos[i] = j;
                    break;
                }
            }   
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int k = -1;
            for (int j = i; j < n; ++j) {
                if (pos[j] <= i) {
                    ans += j - i;
                    k = j;
                    break;
                }
            }
            if (~k) {
                for (int j = k; j > i; --j) {
                    swap(pos[j], pos[j - 1]);
                }
            } else {
                return -1;
            }
        }
        return ans;
    }
};
/*
作者：力扣官方题解
链接：https://leetcode.cn/problems/minimum-swaps-to-arrange-a-binary-grid/solutions/371355/pai-bu-er-jin-zhi-wang-ge-de-zui-shao-jiao-huan-ci/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/




class Solution {//第一次自己写的拉完了WA6发,贪心+0后缀
public:
    int minSwaps(vector<vector<int>>& grid) {
        int rowsize=grid.size();
        int colsize=grid[0].size();
        vector<int> arr(rowsize);
        for(int i=0;i<rowsize;i++){
            if(grid[i][colsize-1]!=0){
                arr[i]=0;
                continue;
            }
            int count=1;
            for(int j=colsize-2;j>0;j--){
                if(grid[i][j]==grid[i][j+1]){
                    count++;
                }
                else{
                    break;
                }
            }
            arr[i]=count;
            cout<<arr[i]<<"\n";
        }
        int ans=0;
        auto access=[&](int a,int b)->int{
            int change=0;
            for(int i=b;i>a;i--){
                swap(arr[i],arr[i-1]);
                change++;
            }
            return change;
        };
        for(int i=0;i<rowsize;i++){
            if(arr[i]<rowsize-1-i){
                int find=0;
                for(int j=i+1;j<rowsize;j++){
                    if(arr[j]>=rowsize-1-i){
                        find=1;
                        ans+=access(i,j);
                        break;
                    }
                }
                if(!find){
                return -1;
            }
            }
            
        }
        
   return ans;
   }
   };
