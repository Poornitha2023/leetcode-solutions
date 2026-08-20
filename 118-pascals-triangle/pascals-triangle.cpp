class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>bh(numRows);
         bh[0] = {1};
        for(int i=1;i<numRows;i++){
            bh[i].resize(i+1);
            bh[i][0]=1;
            bh[i][i]=1;
            for(int j=1;j<i;j++){
                bh[i][j]=bh[i-1][j-1]+bh[i-1][j];
            }
        }
        return bh;
    }
};