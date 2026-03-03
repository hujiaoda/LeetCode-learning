class Solution {//灵神的神秘数学解法吓哭了
public:
char findKthBit(int, int k) {
    if (k % 2) {
        return '0' + k / 2 % 2;
    }
    k /= k & -k; 
    return '1' - k / 2 % 2;
}
};
class poorSolution {//依旧是我个人拉完了的解法模拟说是
public:
    char findKthBit(int n, int k) {
        int temp=n;
        string s={'0'};
        temp--;
        while(temp--){
            string add={};
            int size=s.size();
            for(int i=size-1;i>=0;i--){
                if(s[i]=='1'){
                    add+='0';
                }
                else{
                    add+='1';
                }
            }
            s+='1';
            s+=add;
        }
        return s[k-1];
    }
};
