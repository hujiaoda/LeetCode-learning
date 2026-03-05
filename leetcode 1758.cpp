class Solution {
public://依旧easy秒了
    int minOperations(string s) {
        int count1=0,count2=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]=='1'){
                    count1++;
                }
                else{
                    count2++;
                }
            }
            else{
                if(s[i]=='1'){
                    count2++;
                }
                else{
                    count1++;
                }
            }
        }
        return min(n-count1,n-count2);
    }
};
