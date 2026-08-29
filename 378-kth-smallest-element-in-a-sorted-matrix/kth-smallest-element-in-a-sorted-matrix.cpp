class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>b;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                b.push_back(matrix[i][j]);
            }
        }
        sort(b.begin(),b.end());
        int p=b[k-1];
        return p;
    }
};