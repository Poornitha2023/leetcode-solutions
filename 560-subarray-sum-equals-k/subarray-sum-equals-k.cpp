class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
       vector<int>bh(nums.size());
       bh[0]=nums[0];
       for(int i=1;i<nums.size();i++){
        bh[i]=bh[i-1]+nums[i];
       }
       int cnt=0;
       for(int i=0;i<bh.size();i++){
        if(bh[i]==k){
          cnt++;
        }
        for(int j=0;j<i;j++){
            if(bh[i]-bh[j]==k){
                cnt++;
            }
        }
       }
       return cnt;
        
    }
};