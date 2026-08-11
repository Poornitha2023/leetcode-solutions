class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
    vector<int>bh(code.size(),0);
        if(k==0){
            return bh;
        }
        int sum=0;
        for(int i=0;i<bh.size();i++){
            if(k>0){
                for(int j=i+1;j<i+k+1;j++){
                    bh[i]+=code[(j%code.size())];
                }
            }
            if(k<0){
                for(int j=i-abs(k);j<i;j++){
                    bh[i]+=code[(j+code.size())%code.size()];
                }
            }
        }
        return bh;
       
    }
};