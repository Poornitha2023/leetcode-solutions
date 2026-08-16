class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int windowsize=2*k+1;
        vector<int>ans(n,-1);
        if(n<windowsize){
            return ans;
        }
        vector<long long>prefixsum(n+1);
        for(int i=0;i<n;++i){
            prefixsum[i+1]=prefixsum[i]+nums[i];
      }
      for(int i=k;i+k<n;++i){
        ans[i]=(prefixsum[i+k+1]-prefixsum[i-k])/windowsize;

      }
      return ans;
    }
};